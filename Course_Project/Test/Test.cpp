#include <sqlite_orm/sqlite_orm.h>
#include <iostream>

#include "Test.h"
using namespace sqlite_orm;

auto storage = make_storage(
	"test.db",
	make_table("test",
		make_column("id", &Test::TEST::id, primary_key().autoincrement()),
		make_column("text", &Test::TEST::Text),
		make_column("time", &Test::TEST::Time),
		make_column("questions_count", &Test::TEST::QuestionsCount)
	),
	make_table("question",
		make_column("id", &Test::QUESTION::id, primary_key()),
		make_column("question_number", &Test::QUESTION::QuestionNumber),
		make_column("text", &Test::QUESTION::Text)),
	make_table("answer",
		make_column("id", &Test::ANSWER::Id, primary_key().autoincrement()),
		make_column("question_id", &Test::ANSWER::QuestionId),
		make_column("text", &Test::ANSWER::Text),
		make_column("is_true", &Test::ANSWER::IsTrue),
		foreign_key(&Test::ANSWER::QuestionId).references(&Test::QUESTION::id))
);


int Test::EditTestText(std::string Text) {
	try
	{
	storage.sync_schema();

	auto question = storage.get_all<Test::TEST>();
	Test::TEST newText{
			-1,
			Text,
			5,
			15
	};
	
		if (question.size())
		{
			newText.id = question[0].id;
			storage.update(newText);
		}
		else {
			storage.insert(newText);
		}
		return 0;

	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
		return 1;
	}
	
}

int Test::SetTestTimeAndQuestionsCount(int Time,int Count) {
	try {
		storage.sync_schema();
		auto questions = storage.get_all<Test::TEST>();
		Test::TEST Test;
		Test.id = -1;
		Test.Time = Time;
		Test.QuestionsCount = Count;
		if (questions.size())
		{
			Test.id = questions[0].id;
			Test.Text = questions[0].Text;

			storage.update(Test);
		}
		else {
			storage.insert(Test);
		}
		return 0;
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
		return 1;
	}
}

Test::TEST Test::GetTest() {
	try
	{
		storage.sync_schema();
		auto tests = storage.get_all<Test::TEST>();
		if (tests.size())
		{
			Test::TEST test = tests[0];
			return test;
		}
		
		return Test::TEST {
			0,
			"",
			0,
			0
		};
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
	}
}


Test::QUESTION Test::GetQuestion(int QuestionNumber) {
	Test::QUESTION QuestionObject = {
		0,
		1,
		""
	};
	try
	{
		storage.sync_schema();
		auto Questions = storage.get_all<Test::QUESTION>(where(c(&Test::QUESTION::QuestionNumber) == QuestionNumber));
		if (Questions.size())
		{
			auto Question = Questions[0];
			return Question;
		}
		return QuestionObject;
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
		return QuestionObject;
	}
}

int Test::EditQuestion(int QuestionNumber, std::string NewText) {
	try
	{
		storage.sync_schema();

		Test::QUESTION QuestionObject = {
			-1,
			QuestionNumber,
			NewText
		};
		std::cout << QuestionNumber <<std::endl;
		auto Questions = storage.get_all<Test::QUESTION>(where(c(&Test::QUESTION::QuestionNumber) == QuestionNumber));
		if (Questions.size()) {
			QuestionObject.id = Questions[0].id;
			storage.update<Test::QUESTION>(QuestionObject);
		}
		else {
			storage.insert<Test::QUESTION>(QuestionObject);
		}

		
		return 0;
	}
	catch (const std::system_error& e)
	{
		std::cout << "EDIT QUESTION" << std::endl;
		std::cout << e.what();
		return 1;
	}
}

int Test::ClearTest() {
	try
	{
		storage.sync_schema();
		storage.remove_all<Test::ANSWER>();
		storage.remove_all<Test::QUESTION>();
		storage.remove_all<Test::TEST>();
		return 0;
	}
	catch (const std::system_error& e)
	{
		std::cout << "CLEAR TEST" << std::endl;
		std::cout << e.what();
		return 1;
	}
}

int Test::SetAnwers(int QuestionId,std::array<Test::ANSWER,5>& Answers) {
	try
	{
		storage.sync_schema();
		if (!Answers.size())
		{
			std::cout << Answers.size() << std::endl;
			return 1;
		}
		for (int i = 0; i < 5; i++)
		{
			storage.remove_all<Test::ANSWER>(where(c(&Test::ANSWER::QuestionId) == QuestionId));

			auto Answer = Answers[i];
		
			std::cout << Answer.Text << Answer.IsTrue << std::endl;
			Test::ANSWER NsAnswer;
			storage.insert(Answer);
		}
		return 0;
	}
	catch (const std::system_error& e)
	{
		std::cout << "SET ANSWERS" << std::endl;
		std::cout << e.what();
		return 1;
	}
}

std::vector<Test::ANSWER,std::allocator<Test::ANSWER>> Test::GetAnswers(int QuestionId) {
	try
	{
		storage.sync_schema();
		auto a = storage.get_all<Test::ANSWER>(where(c(&Test::ANSWER::QuestionId) == QuestionId));
		if (!a.size())
		{
			return std::vector<Test::ANSWER, std::allocator<Test::ANSWER>>{};
		}
		return a;
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
		return std::vector<Test::ANSWER, std::allocator<Test::ANSWER>>{};

	}
}
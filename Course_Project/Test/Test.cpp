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
	make_table("anwer",
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
			1,
			Text,
			5,
			15
	};
	
		if (question.size())
		{
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
		Test.id = 1;
		Test.Time = Time;
		Test.QuestionsCount = Count;
		if (questions.size())
		{
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
			0,
			QuestionNumber,
			NewText
		};
		std::cout << QuestionNumber <<std::endl;
		auto Questions = storage.get_all<Test::QUESTION>(where(c(&Test::QUESTION::QuestionNumber) == QuestionNumber));
		if (Questions.size()) {
			storage.update<Test::QUESTION>(QuestionObject);
		}
		else {
			storage.insert<Test::QUESTION>(QuestionObject);

		}

		
		return 0;
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
		return 1;
	}
}
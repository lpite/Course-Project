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
	)
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

std::string Test::GetTestText() {
	try
	{
		storage.sync_schema();

		auto questions = storage.get_all<Test::TEST>();
		if (questions.size())
		{
			return questions[0].Text;
		}
		std::cout << "Error";
		return "";
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
	}

	return "";
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


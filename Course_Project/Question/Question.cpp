#include "Question.h"
#include <sqlite_orm/sqlite_orm.h>
#include <iostream>

using namespace sqlite_orm;

auto storage = make_storage(
	"test.db",
	make_table("test",
		make_column("ID", &Question::QUESTION::id, primary_key().autoincrement()),
		make_column("text", &Question::QUESTION::Text))
);



int Question::EditTestText(std::string Text) {
	storage.sync_schema();
	try
	{
	auto question = storage.get_all<Question::QUESTION>();
	Question::QUESTION newText{
			1,
			Text
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

std::string Question::GetTestText() {
	storage.sync_schema();
	try
	{
		auto questions = storage.get_all<Question::QUESTION>();
		return questions[0].Text;
	}
	catch (const std::system_error& e)
	{
		std::cout << e.what();
	}

	return "";
}
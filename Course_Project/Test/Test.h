#pragma once
#include <string>

namespace Test {

	struct TEST
	{
		int id;
		std::string Text;
		int Time;
		int QuestionsCount;
	};
	
	struct ANSWER {
		int id;
		std::string Text;
	};

	std::string GetTestText();
	int EditTestText(std::string Text);
	int SetTestTimeAndQuestionsCount(int Time, int Count);
	TEST GetTest();

}
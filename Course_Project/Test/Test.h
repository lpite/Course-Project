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
	
	struct QUESTION {
		int id;
		int QuestionNumber;
		std::string Text;
	};

	struct ANSWER {
		int Id;
		int QuestionId;
		std::string Text;
		bool IsTrue;
	};

	int EditTestText(std::string Text);
	int SetTestTimeAndQuestionsCount(int Time, int Count);
	TEST GetTest();
	QUESTION GetQuestion(int id);
	ANSWER GetAnswer(int id);
	int EditQuestion(int QuestionNumber,std::string NewText);

}
#pragma once
#include <string>
#include <vector>

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

	struct HISTORY{
		int Id;
		int UserId;
		double score;
	};

	int EditTestText(std::string Text);
	int SetTestTimeAndQuestionsCount(int Time, int Count);
	TEST GetTest();
	QUESTION GetQuestion(int id);
	std::vector<Test::ANSWER, std::allocator<Test::ANSWER>> GetAnswers(int QuestionId);
	int EditQuestion(int QuestionNumber,std::string NewText);
	int ClearTest();
	int SetAnwers(int QuestionId, std::array<Test::ANSWER, 5>& Answers);
	int SaveHistory(int UserId,int Score);
	int ClearHistory();
	std::vector<Test::HISTORY, std::allocator<Test::HISTORY>> GetHistory();

}
#pragma once
#include <string>

namespace Question {

	struct QUESTION
	{
		int id;
		std::string Text;
	};

	std::string GetTestText();
	int EditTestText(std::string Text);
}
#pragma once
#include <iostream>

#include "../Test/Test.h"

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditTest
	/// </summary>
	public ref class EditTest : public System::Windows::Forms::Form
	{
	public:
		EditTest(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Questions_Count_TextBox;
	private: System::Windows::Forms::TextBox^ Time_TextBox;
	private: System::Windows::Forms::Button^ Save_Test_Button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Questions_Count_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Time_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Save_Test_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Questions_Count_TextBox
			// 
			this->Questions_Count_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Questions_Count_TextBox->Location = System::Drawing::Point(12, 104);
			this->Questions_Count_TextBox->Name = L"Questions_Count_TextBox";
			this->Questions_Count_TextBox->Size = System::Drawing::Size(107, 29);
			this->Questions_Count_TextBox->TabIndex = 0;
			// 
			// Time_TextBox
			// 
			this->Time_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time_TextBox->Location = System::Drawing::Point(12, 185);
			this->Time_TextBox->Name = L"Time_TextBox";
			this->Time_TextBox->Size = System::Drawing::Size(108, 29);
			this->Time_TextBox->TabIndex = 1;
			// 
			// Save_Test_Button
			// 
			this->Save_Test_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save_Test_Button->Location = System::Drawing::Point(314, 451);
			this->Save_Test_Button->Name = L"Save_Test_Button";
			this->Save_Test_Button->Size = System::Drawing::Size(127, 50);
			this->Save_Test_Button->TabIndex = 2;
			this->Save_Test_Button->Text = L"Save Test";
			this->Save_Test_Button->UseVisualStyleBackColor = true;
			this->Save_Test_Button->Click += gcnew System::EventHandler(this, &EditTest::Save_Test_Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Questions count";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Time for test";
			// 
			// EditTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Save_Test_Button);
			this->Controls->Add(this->Time_TextBox);
			this->Controls->Add(this->Questions_Count_TextBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"EditTest";
			this->Text = L"EditTest";
			this->Load += gcnew System::EventHandler(this, &EditTest::EditTest_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditTest_Load(System::Object^ sender, System::EventArgs^ e) {
		auto question = Test::GetTest();
		Time_TextBox->Text = Convert::ToString(question.Time);
		Questions_Count_TextBox->Text = Convert::ToString(question.QuestionsCount);
	}
	private: System::Void Save_Test_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int Time = Convert::ToInt64(Time_TextBox->Text);
			int Count = Convert::ToUInt64(Questions_Count_TextBox->Text);

			if (Count<15)
			{
				MessageBox::Show("minimum amount of questions is 15");
			}
			else {
				Test::SetTestTimeAndQuestionsCount(Time, Count);
				this->Close();
			}
		}
		catch (const std::exception&)
		{
			std::cout << "Error";
		}
	}
};
}

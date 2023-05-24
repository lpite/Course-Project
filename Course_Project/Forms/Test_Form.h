#pragma once

#include "../Auth/User.h"
#include "../Test/Test.h"


namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Test_Form
	/// </summary>
	public ref class Test_Form : public System::Windows::Forms::Form
	{
	public:
		Test_Form(void)
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
		~Test_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Finish_Test_Button;

	private: System::Windows::Forms::RadioButton^ Answer_Radio_1;
	private: System::Windows::Forms::RadioButton^ Answer_Radio_2;
	private: System::Windows::Forms::RadioButton^ Answer_Radio_3;
	private: System::Windows::Forms::RadioButton^ Answer_Radio_4;
	private: System::Windows::Forms::RadioButton^ Answer_Radio_5;
	private: System::Windows::Forms::RichTextBox^ Question_Text;

	private: System::Windows::Forms::Button^ Next_Question_Button;
	private: System::Windows::Forms::Button^ Prev_Question_Button;
	private: System::Windows::Forms::Label^ Question_Number_Label;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Finish_Test_Button = (gcnew System::Windows::Forms::Button());
			this->Answer_Radio_1 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer_Radio_2 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer_Radio_3 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer_Radio_4 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer_Radio_5 = (gcnew System::Windows::Forms::RadioButton());
			this->Question_Text = (gcnew System::Windows::Forms::RichTextBox());
			this->Next_Question_Button = (gcnew System::Windows::Forms::Button());
			this->Prev_Question_Button = (gcnew System::Windows::Forms::Button());
			this->Question_Number_Label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Test";
			// 
			// Finish_Test_Button
			// 
			this->Finish_Test_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Finish_Test_Button->Location = System::Drawing::Point(1134, 12);
			this->Finish_Test_Button->Name = L"Finish_Test_Button";
			this->Finish_Test_Button->Size = System::Drawing::Size(118, 46);
			this->Finish_Test_Button->TabIndex = 1;
			this->Finish_Test_Button->Text = L"Finish test";
			this->Finish_Test_Button->UseVisualStyleBackColor = true;
			this->Finish_Test_Button->Click += gcnew System::EventHandler(this, &Test_Form::button1_Click);
			// 
			// Answer_Radio_1
			// 
			this->Answer_Radio_1->AutoSize = true;
			this->Answer_Radio_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_1->Location = System::Drawing::Point(553, 244);
			this->Answer_Radio_1->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_1->Name = L"Answer_Radio_1";
			this->Answer_Radio_1->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_1->TabIndex = 2;
			this->Answer_Radio_1->TabStop = true;
			this->Answer_Radio_1->Text = L"Answer 1";
			this->Answer_Radio_1->UseVisualStyleBackColor = true;
			// 
			// Answer_Radio_2
			// 
			this->Answer_Radio_2->AutoSize = true;
			this->Answer_Radio_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_2->Location = System::Drawing::Point(553, 292);
			this->Answer_Radio_2->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_2->Name = L"Answer_Radio_2";
			this->Answer_Radio_2->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_2->TabIndex = 3;
			this->Answer_Radio_2->TabStop = true;
			this->Answer_Radio_2->Text = L"Answer 1";
			this->Answer_Radio_2->UseVisualStyleBackColor = true;
			// 
			// Answer_Radio_3
			// 
			this->Answer_Radio_3->AutoSize = true;
			this->Answer_Radio_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_3->Location = System::Drawing::Point(553, 340);
			this->Answer_Radio_3->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_3->Name = L"Answer_Radio_3";
			this->Answer_Radio_3->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_3->TabIndex = 4;
			this->Answer_Radio_3->TabStop = true;
			this->Answer_Radio_3->Text = L"Answer 1";
			this->Answer_Radio_3->UseVisualStyleBackColor = true;
			// 
			// Answer_Radio_4
			// 
			this->Answer_Radio_4->AutoSize = true;
			this->Answer_Radio_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_4->Location = System::Drawing::Point(553, 388);
			this->Answer_Radio_4->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_4->Name = L"Answer_Radio_4";
			this->Answer_Radio_4->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_4->TabIndex = 5;
			this->Answer_Radio_4->TabStop = true;
			this->Answer_Radio_4->Text = L"Answer 1";
			this->Answer_Radio_4->UseVisualStyleBackColor = true;
			// 
			// Answer_Radio_5
			// 
			this->Answer_Radio_5->AutoSize = true;
			this->Answer_Radio_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_5->Location = System::Drawing::Point(553, 436);
			this->Answer_Radio_5->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_5->Name = L"Answer_Radio_5";
			this->Answer_Radio_5->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_5->TabIndex = 6;
			this->Answer_Radio_5->TabStop = true;
			this->Answer_Radio_5->Text = L"Answer 1";
			this->Answer_Radio_5->UseVisualStyleBackColor = true;
			// 
			// Question_Text
			// 
			this->Question_Text->Location = System::Drawing::Point(374, 91);
			this->Question_Text->Name = L"Question_Text";
			this->Question_Text->ReadOnly = true;
			this->Question_Text->Size = System::Drawing::Size(460, 140);
			this->Question_Text->TabIndex = 7;
			this->Question_Text->Text = L"";
			this->Question_Text->TextChanged += gcnew System::EventHandler(this, &Test_Form::Question_Text_TextChanged);
			// 
			// Next_Question_Button
			// 
			this->Next_Question_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Next_Question_Button->Location = System::Drawing::Point(760, 494);
			this->Next_Question_Button->Name = L"Next_Question_Button";
			this->Next_Question_Button->Size = System::Drawing::Size(74, 54);
			this->Next_Question_Button->TabIndex = 8;
			this->Next_Question_Button->Text = L"Next";
			this->Next_Question_Button->UseVisualStyleBackColor = true;
			this->Next_Question_Button->Click += gcnew System::EventHandler(this, &Test_Form::Next_Question_Button_Click);
			// 
			// Prev_Question_Button
			// 
			this->Prev_Question_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Prev_Question_Button->Location = System::Drawing::Point(374, 494);
			this->Prev_Question_Button->Name = L"Prev_Question_Button";
			this->Prev_Question_Button->Size = System::Drawing::Size(74, 54);
			this->Prev_Question_Button->TabIndex = 8;
			this->Prev_Question_Button->Text = L"Prev";
			this->Prev_Question_Button->UseVisualStyleBackColor = true;
			this->Prev_Question_Button->Click += gcnew System::EventHandler(this, &Test_Form::Prev_Question_Button_Click);
			// 
			// Question_Number_Label
			// 
			this->Question_Number_Label->AutoSize = true;
			this->Question_Number_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Question_Number_Label->Location = System::Drawing::Point(549, 34);
			this->Question_Number_Label->Name = L"Question_Number_Label";
			this->Question_Number_Label->Size = System::Drawing::Size(94, 24);
			this->Question_Number_Label->TabIndex = 9;
			this->Question_Number_Label->Text = L"Question";
			// 
			// Test_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->Question_Number_Label);
			this->Controls->Add(this->Prev_Question_Button);
			this->Controls->Add(this->Next_Question_Button);
			this->Controls->Add(this->Question_Text);
			this->Controls->Add(this->Answer_Radio_5);
			this->Controls->Add(this->Answer_Radio_4);
			this->Controls->Add(this->Answer_Radio_3);
			this->Controls->Add(this->Answer_Radio_2);
			this->Controls->Add(this->Answer_Radio_1);
			this->Controls->Add(this->Finish_Test_Button);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Test_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Test";
			this->Load += gcnew System::EventHandler(this, &Test_Form::Test_Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int QuestionId = 0;
	private: System::Void Test_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		auto user = User::GetCurrent()[0];
		if (user.is_admin)
		{
			Question_Text->ReadOnly = false;
		}
		
		Question_Number_Label->Text = "Question 1";
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void Question_Text_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void Prev_Question_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (QuestionId != 0)
		{
			QuestionId--;
			Question_Number_Label->Text = "Question "+ Convert::ToString(QuestionId+1);
		}
	}
	
	private: System::Void Next_Question_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		auto test = Test::GetTest();
		if (QuestionId+1 != test.QuestionsCount)
		{
			QuestionId++;
			Question_Number_Label->Text = "Question " + Convert::ToString(QuestionId+1);
		}
	}
};
}

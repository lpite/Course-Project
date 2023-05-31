#pragma once
//
//████  ████  ████
//▓▓▒▒▒▒▓▓▒▒▒▒▓▓▓▓▓▓░░▓▓
//██████████▓▓██▓▓░░▒▒░░░░▒▒▓▓▒▒▓▓▒▒██
//▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓██████▒▒▒▒██▓▓▓▓▒▒▒▒██
//████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒██▓▓▓▓▓▓▓▓▓▓▓▓
//██▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒████▓▓▓▓▓▓██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒░░██▓▓▓▓▓▓██
//██▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒██▓▓▓▓▓▓██
//██▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓██
//██▒▒▒▒▒▒▓▓▓▓██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▒▒▓▓▓▓████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▓▓▓▓▓▓▓▓██
//██▒▒▒▒▓▓▓▓██░░██▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▒▒▓▓██░░  ██▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▓▓██░░░░░░██▒▒▒▒▓▓██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▓▓██░░░░░░░░██▒▒▓▓██▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▓▓██░░░░░░░░░░██▒▒██░░██▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▓▓██░░░░░░░░░░██▒▒██░░██▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒▓▓██▓▓▓▓░░░░░░  ████░░░░██▒▒▓▓██▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒██░░░░░░▓▓░░░░░░░░░░▓▓▓▓▓▓██▓▓██▓▓▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒▒▒████████░░░░░░░░░░▓▓░░░░░░░░██░░██▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██
//██▒▒██░░▓▓▓▓██░░░░░░░░░░████████░░░░██▒▒▒▒▓▓██▓▓▓▓▓▓██▓▓▓▓▓▓▓▓██
//██▒▒██  ▒▒▓▓▓▓░░░░░░░░▓▓░░▓▓▓▓▓▓▓▓░░██▒▒▒▒▓▓████▓▓▓▓██▓▓▓▓▓▓██
//██▒▒██░░  ▒▒▒▒░░░░░░░░    ▒▒▓▓▓▓░░░░██▒▒▒▒▓▓██░░██▓▓██▓▓▓▓▓▓██
//██▒▒██░░░░░░░░░░░░░░░░░░  ▒▒▒▒  ░░░░██▒▒▒▒▓▓██░░████▓▓▓▓▓▓▓▓██
//██▒▒██░░░░░░░░░░  ░░░░░░  ░░░░░░░░░░██▒▒▒▒▓▓██░░██▓▓▓▓▓▓▓▓▓▓██
//██▒▒██░░░░░░██░░░░░░░░░░░░░░░░░░░░░░██▒▒▓▓██░░██▓▓▓▓▓▓▓▓▓▓▓▓██
//██▒▒▓▓██  ░░░░░░░░░░░░░░░░░░░░░░░░██▒▒▒▒▓▓████▓▓▓▓▓▓▒▒▓▓▓▓██
//██▓▓██░░  ░░░░░░░░░░▓▓░░░░░░░░░░██▒▒▒▒▓▓██▓▓▓▓▓▓▓▓▒▒▓▓▓▓██
//██▒▒██░░░░░░▓▓      ▓▓░░░░░░░░░░██▒▒▓▓████▓▓▓▓▓▓▒▒▓▓▓▓▓▓██
//██▒▒▓▓██░░░░░░▓▓▓▓▓▓░░░░░░░░░░░░██▒▒▓▓████▓▓▓▓▒▒▒▒▓▓▓▓▓▓██
//██▓▓▓▓██░░░░░░░░░░░░░░░░░░░░██▒▒▓▓██░░██▓▓▒▒▒▒▒▒▓▓▓▓▓▓██
//██▒▒██  ██░░░░  ░░░░░░░░██████▒▒▓▓██░░██▒▒▓▓▓▓▓▓▓▓██▓▓██
//████    ██░░░░░░██████░░░░██▒▒██░░░░██▓▓▓▓▓▓▓▓▓▓██▓▓██
//██████░░░░░░░░░░██▓▓██░░██░░██▓▓▓▓▓▓▓▓██▓▓██
//▓▓░░░░██░░░░░░░░██▓▓██░░░░██░░██▓▓▓▓▓▓██  ██▓▓██
//██  ░░░░██░░░░░░░░████░░░░██  ░░██▓▓▓▓▓▓██    ████
//██  ░░░░██░░░░░░░░░░░░░░████  ░░██░░██▓▓██
//██  ░░░░▓▓░░░░░░░░░░░░░░▓▓    ░░░░██░░░░██
//██  ██░░░░██░░░░░░░░░░░░██    ░░░░██░░░░░░░░██
//██  ██░░██░░░░░░░░░░░░██    ░░░░░░██░░░░░░░░░░██
//██▓▓▓▓▓▓██░░░░  ░░▓▓▓▓░░  ░░░░░░▓▓░░░░░░░░░░░░░░▓▓
//██░░██▓▓████░░░░░░██      ░░░░░░██░░░░░░░░░░░░░░░░██
//██  ░░██▓▓██░░░░░░██▓▓████  ░░░░██░░░░░░░░    ░░░░░░░░██
//▓▓░░  ░░██▓▓██░░░░▓▓▒▒▓▓██░░▓▓░░██░░░░░░          ░░░░░░██
//▓▓██    ░░██▒▒██░░▓▓▒▒▓▓██▒▒░░██▓▓██░░░░░░            ░░░░██
//██      ░░██▒▒████▒▒▓▓██░░░░░░░░░░░░░░░░              ░░░░░░██
//██        ░░████▓▓██▓▓██░░░░        ░░░░██                ░░░░██
//██        ░░██▓▓▒▒▓▓██░░░░            ░░██                ░░░░██


#include <stdlib.h>
#include <array>
#include <tuple>
#include <msclr\marshal_cppstd.h>
#include <malloc.h>
#include <iostream>


#include "../Auth/User.h"
#include "../Test/Test.h"

typedef struct DoublyNode {
	int QuestionNumber;
	int SelectedAnswer;
	struct DoublyNode* next;
	struct DoublyNode* prev;
} DoublyNode;

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

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
	private: System::Windows::Forms::Button^ Save_Test_Button;
	private: System::Windows::Forms::TextBox^ TextBox_Answer1;
	private: System::Windows::Forms::TextBox^ TextBox_Answer4;

	private: System::Windows::Forms::TextBox^ TextBox_Answer3;

	private: System::Windows::Forms::TextBox^ TextBox_Answer2;
	private: System::Windows::Forms::TextBox^ TextBox_Answer5;


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
			this->Save_Test_Button = (gcnew System::Windows::Forms::Button());
			this->TextBox_Answer1 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Answer4 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Answer3 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Answer2 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Answer5 = (gcnew System::Windows::Forms::TextBox());
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
			this->Answer_Radio_1->Location = System::Drawing::Point(553, 246);
			this->Answer_Radio_1->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_1->Name = L"Answer_Radio_1";
			this->Answer_Radio_1->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_1->TabIndex = 2;
			this->Answer_Radio_1->TabStop = true;
			this->Answer_Radio_1->Text = L"Answer 1";
			this->Answer_Radio_1->UseVisualStyleBackColor = true;
			this->Answer_Radio_1->CheckedChanged += gcnew System::EventHandler(this, &Test_Form::Answer_Radio_1_CheckedChanged);
			// 
			// Answer_Radio_2
			// 
			this->Answer_Radio_2->AutoSize = true;
			this->Answer_Radio_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_2->Location = System::Drawing::Point(553, 294);
			this->Answer_Radio_2->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_2->Name = L"Answer_Radio_2";
			this->Answer_Radio_2->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_2->TabIndex = 3;
			this->Answer_Radio_2->TabStop = true;
			this->Answer_Radio_2->Text = L"Answer 1";
			this->Answer_Radio_2->UseVisualStyleBackColor = true;
			this->Answer_Radio_2->CheckedChanged += gcnew System::EventHandler(this, &Test_Form::Answer_Radio_2_CheckedChanged);
			// 
			// Answer_Radio_3
			// 
			this->Answer_Radio_3->AutoSize = true;
			this->Answer_Radio_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_3->Location = System::Drawing::Point(553, 342);
			this->Answer_Radio_3->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_3->Name = L"Answer_Radio_3";
			this->Answer_Radio_3->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_3->TabIndex = 4;
			this->Answer_Radio_3->TabStop = true;
			this->Answer_Radio_3->Text = L"Answer 1";
			this->Answer_Radio_3->UseVisualStyleBackColor = true;
			this->Answer_Radio_3->CheckedChanged += gcnew System::EventHandler(this, &Test_Form::Answer_Radio_3_CheckedChanged);
			// 
			// Answer_Radio_4
			// 
			this->Answer_Radio_4->AutoSize = true;
			this->Answer_Radio_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_4->Location = System::Drawing::Point(553, 390);
			this->Answer_Radio_4->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_4->Name = L"Answer_Radio_4";
			this->Answer_Radio_4->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_4->TabIndex = 5;
			this->Answer_Radio_4->TabStop = true;
			this->Answer_Radio_4->Text = L"Answer 1";
			this->Answer_Radio_4->UseVisualStyleBackColor = true;
			this->Answer_Radio_4->CheckedChanged += gcnew System::EventHandler(this, &Test_Form::Answer_Radio_4_CheckedChanged);
			// 
			// Answer_Radio_5
			// 
			this->Answer_Radio_5->AutoSize = true;
			this->Answer_Radio_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer_Radio_5->Location = System::Drawing::Point(553, 438);
			this->Answer_Radio_5->Margin = System::Windows::Forms::Padding(10);
			this->Answer_Radio_5->Name = L"Answer_Radio_5";
			this->Answer_Radio_5->Size = System::Drawing::Size(107, 28);
			this->Answer_Radio_5->TabIndex = 6;
			this->Answer_Radio_5->TabStop = true;
			this->Answer_Radio_5->Text = L"Answer 1";
			this->Answer_Radio_5->UseVisualStyleBackColor = true;
			this->Answer_Radio_5->CheckedChanged += gcnew System::EventHandler(this, &Test_Form::Answer_Radio_5_CheckedChanged);
			// 
			// Question_Text
			// 
			this->Question_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Question_Text->Location = System::Drawing::Point(374, 91);
			this->Question_Text->Name = L"Question_Text";
			this->Question_Text->ReadOnly = true;
			this->Question_Text->Size = System::Drawing::Size(460, 140);
			this->Question_Text->TabIndex = 7;
			this->Question_Text->Text = L"";
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
			// Save_Test_Button
			// 
			this->Save_Test_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save_Test_Button->Location = System::Drawing::Point(553, 494);
			this->Save_Test_Button->Name = L"Save_Test_Button";
			this->Save_Test_Button->Size = System::Drawing::Size(107, 54);
			this->Save_Test_Button->TabIndex = 10;
			this->Save_Test_Button->Text = L"Save";
			this->Save_Test_Button->UseVisualStyleBackColor = true;
			this->Save_Test_Button->Visible = false;
			this->Save_Test_Button->Click += gcnew System::EventHandler(this, &Test_Form::Save_Test_Button_Click);
			// 
			// TextBox_Answer1
			// 
			this->TextBox_Answer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Answer1->Location = System::Drawing::Point(408, 248);
			this->TextBox_Answer1->Name = L"TextBox_Answer1";
			this->TextBox_Answer1->Size = System::Drawing::Size(112, 26);
			this->TextBox_Answer1->TabIndex = 11;
			// 
			// TextBox_Answer4
			// 
			this->TextBox_Answer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Answer4->Location = System::Drawing::Point(408, 390);
			this->TextBox_Answer4->Name = L"TextBox_Answer4";
			this->TextBox_Answer4->Size = System::Drawing::Size(112, 26);
			this->TextBox_Answer4->TabIndex = 12;
			// 
			// TextBox_Answer3
			// 
			this->TextBox_Answer3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Answer3->Location = System::Drawing::Point(408, 344);
			this->TextBox_Answer3->Name = L"TextBox_Answer3";
			this->TextBox_Answer3->Size = System::Drawing::Size(112, 26);
			this->TextBox_Answer3->TabIndex = 13;
			// 
			// TextBox_Answer2
			// 
			this->TextBox_Answer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Answer2->Location = System::Drawing::Point(408, 296);
			this->TextBox_Answer2->Name = L"TextBox_Answer2";
			this->TextBox_Answer2->Size = System::Drawing::Size(112, 26);
			this->TextBox_Answer2->TabIndex = 14;
			// 
			// TextBox_Answer5
			// 
			this->TextBox_Answer5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox_Answer5->Location = System::Drawing::Point(408, 438);
			this->TextBox_Answer5->Name = L"TextBox_Answer5";
			this->TextBox_Answer5->Size = System::Drawing::Size(112, 26);
			this->TextBox_Answer5->TabIndex = 15;
			// 
			// Test_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->TextBox_Answer5);
			this->Controls->Add(this->TextBox_Answer2);
			this->Controls->Add(this->TextBox_Answer3);
			this->Controls->Add(this->TextBox_Answer4);
			this->Controls->Add(this->TextBox_Answer1);
			this->Controls->Add(this->Save_Test_Button);
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
	private: int QuestionNumber = 1;
	DoublyNode* head = NULL;
	int SelectedAnswer = 0;

	private:void ChangeAnswers(){
		auto UserObject = User::GetCurrent()[0];

		auto Question = Test::GetQuestion(QuestionNumber);

		auto Answers = Test::GetAnswers(Question.id);

		if (Answers.size())
		{
			TextBox_Answer1->Text = marshal_as<String^>(Answers[0].Text);
			TextBox_Answer2->Text = marshal_as<String^>(Answers[1].Text);
			TextBox_Answer3->Text = marshal_as<String^>(Answers[2].Text);
			TextBox_Answer4->Text = marshal_as<String^>(Answers[3].Text);
			if (UserObject.is_admin)
			{
				Answer_Radio_1->Checked = Answers[0].IsTrue;
				Answer_Radio_2->Checked = Answers[1].IsTrue;
				Answer_Radio_3->Checked = Answers[2].IsTrue;
				Answer_Radio_4->Checked = Answers[3].IsTrue;
				Answer_Radio_5->Checked = Answers[4].IsTrue;
			}
			else {
				Answer_Radio_1->Checked = false;
				Answer_Radio_2->Checked = false;
				Answer_Radio_3->Checked = false;
				Answer_Radio_4->Checked = false;
				Answer_Radio_5->Checked = false;
				Answer_Radio_1->Text = marshal_as<String^>(Answers[0].Text);
				Answer_Radio_2->Text = marshal_as<String^>(Answers[1].Text);
				Answer_Radio_3->Text = marshal_as<String^>(Answers[2].Text);
				Answer_Radio_4->Text = marshal_as<String^>(Answers[3].Text);
				Answer_Radio_5->Text = marshal_as<String^>(Answers[4].Text);
			}																
		}
		else {
			TextBox_Answer1->Text = "";
			TextBox_Answer2->Text = "";
			TextBox_Answer3->Text = "";
			TextBox_Answer4->Text = "";
			Answer_Radio_1->Checked = false;
			Answer_Radio_2->Checked = false;
			Answer_Radio_3->Checked = false;
			Answer_Radio_4->Checked = false;
			Answer_Radio_5->Checked = false;
		}

	}

	private: System::Void Test_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		auto TestObject = Test::GetTest();
		auto User = User::GetCurrent()[0];
		auto Question = Test::GetQuestion(QuestionNumber);
		auto Answers = Test::GetAnswers(Question.id);

		for (int i = 0; i < TestObject.QuestionsCount; ++i) {
			DoublyNode* tmp = (DoublyNode*)malloc(sizeof(DoublyNode));
			if (tmp)
			{
				tmp->QuestionNumber = i + 1;
				tmp->SelectedAnswer = 0;
				tmp->prev = head;
				tmp->next = NULL;
				if (head != NULL)
				{
					head->next = tmp;
				}
				head = tmp;
			}
		}

		ChangeAnswers();
		if (User.is_admin)
		{
			Question_Text->ReadOnly = false;
			Answer_Radio_1->Text = "+";
			Answer_Radio_2->Text = "+";
			Answer_Radio_3->Text = "+";
			Answer_Radio_4->Text = "+";
			Answer_Radio_5->Text = "+";
			TextBox_Answer5->Text = "Another";
			TextBox_Answer5->ReadOnly = true;
			Save_Test_Button->Visible = true;
		}
		else {
			TextBox_Answer1->Visible = false;
			TextBox_Answer2->Visible = false;
			TextBox_Answer3->Visible = false;
			TextBox_Answer4->Visible = false;
			TextBox_Answer5->Visible = false;

		}
		if (Answers.size() && !User.is_admin)
		{
			Answer_Radio_1->Text = marshal_as<String^>(Answers[0].Text);
			Answer_Radio_2->Text = marshal_as<String^>(Answers[1].Text);
			Answer_Radio_3->Text = marshal_as<String^>(Answers[2].Text);
			Answer_Radio_4->Text = marshal_as<String^>(Answers[3].Text);
			Answer_Radio_5->Text = marshal_as<String^>(Answers[4].Text);
		}
		Question_Text->Text = marshal_as<String^>(Question.Text);

		Question_Number_Label->Text = "Question 1";

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void Prev_Question_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (QuestionNumber != 1)
		{
			auto UserObject = User::GetCurrent()[0];
			DoublyNode* tmp = (DoublyNode*)malloc(sizeof(DoublyNode));
			tmp = head;
			while (tmp != NULL)
			{
				if (tmp->QuestionNumber == QuestionNumber)
				{
					tmp->SelectedAnswer = SelectedAnswer;
					break;
				}
				tmp = tmp->next;
			}
			QuestionNumber--;
			Question_Number_Label->Text = "Question "+ Convert::ToString(QuestionNumber);
			auto Question = Test::GetQuestion(QuestionNumber);
			Question_Text->Text = marshal_as<String^>(Question.Text);
			ChangeAnswers();
			if (!UserObject.is_admin)
			{
				int NextSelectedAnswer = tmp->next->SelectedAnswer;
				Answer_Radio_1->Checked = NextSelectedAnswer == 0 ? true : false;
				Answer_Radio_2->Checked = NextSelectedAnswer == 1 ? true : false;
				Answer_Radio_3->Checked = NextSelectedAnswer == 2 ? true : false;
				Answer_Radio_4->Checked = NextSelectedAnswer == 3 ? true : false;
				Answer_Radio_5->Checked = NextSelectedAnswer == 4 ? true : false;
			}
		}
	}
	
	private: System::Void Next_Question_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		auto test = Test::GetTest();
		auto UserObject = User::GetCurrent()[0];

		if (QuestionNumber != test.QuestionsCount)
		{
			DoublyNode* tmp = (DoublyNode*)malloc(sizeof(DoublyNode));
			tmp = head;
			while (tmp != NULL)
			{
				if (tmp->QuestionNumber == QuestionNumber)
				{
					tmp->SelectedAnswer = SelectedAnswer;
					break;
				}
				tmp = tmp->prev;
			}

			QuestionNumber++;
			Question_Number_Label->Text = "Question " + Convert::ToString(QuestionNumber);
			auto Question = Test::GetQuestion(QuestionNumber);
			Question_Text->Text = marshal_as<String^>(Question.Text);
			ChangeAnswers();
			std::cout << std::endl;
			if (!UserObject.is_admin) {
				int NextSelectedAnswer = tmp->next->SelectedAnswer;

				Answer_Radio_1->Checked = NextSelectedAnswer == 0 ? true : false;
				Answer_Radio_2->Checked = NextSelectedAnswer == 1 ? true : false;
				Answer_Radio_3->Checked = NextSelectedAnswer == 2 ? true : false;
				Answer_Radio_4->Checked = NextSelectedAnswer == 3 ? true : false;
				Answer_Radio_5->Checked = NextSelectedAnswer == 4 ? true : false;
			}
		}
	}
	private: System::Void Save_Test_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string NewText = marshal_as<std::string>(Question_Text->Text);
		std::array<Test::ANSWER,5> Answers;
		
		auto Question = Test::GetQuestion(QuestionNumber);

		Answers[0] = {
			-1,
			Question.id,
			marshal_as<std::string>(TextBox_Answer1->Text),
			Answer_Radio_1->Checked
		};
		Answers[1] = {
			-1,
			Question.id,
			marshal_as<std::string>(TextBox_Answer2->Text),
			Answer_Radio_2->Checked
		};
		Answers[2] = {
			-1,
			Question.id,
			marshal_as<std::string>(TextBox_Answer3->Text),
			Answer_Radio_3->Checked
		};
		Answers[3] = {
			-1,
			Question.id,
			marshal_as<std::string>(TextBox_Answer4->Text),
			Answer_Radio_4->Checked
		};
		Answers[4] = {
			-1,
			Question.id,
			marshal_as<std::string>(TextBox_Answer5->Text),
			Answer_Radio_5->Checked
		};

		Test::EditQuestion(QuestionNumber, NewText);
		Question = Test::GetQuestion(QuestionNumber);
		std::cout << Question.id << std::endl;
		Sleep(500);
		if (Test::SetAnwers(QuestionNumber, Answers)) {
			MessageBox::Show("Error");
		}
		
	}
	private: System::Void Answer_Radio_1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedAnswer = 0;
	}
	private: System::Void Answer_Radio_2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedAnswer = 1;
	}

	private: System::Void Answer_Radio_3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedAnswer = 2;
	}

	private: System::Void Answer_Radio_4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedAnswer = 3;
	}
	private: System::Void Answer_Radio_5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedAnswer = 4;
	}
};
}

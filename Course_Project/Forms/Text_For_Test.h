#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

#include "../Auth/User.h"
#include "../Question/Question.h"

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Text_For_Test
	/// </summary>
	public ref class Text_For_Test : public System::Windows::Forms::Form
	{
	public:
		Text_For_Test(void)
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
		~Text_For_Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Information_Label;
	private: System::Windows::Forms::RichTextBox^ Information_TextBox;
	private: System::Windows::Forms::Button^ Save_Information_Button;

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
			this->Information_Label = (gcnew System::Windows::Forms::Label());
			this->Information_TextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->Save_Information_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Information_Label
			// 
			this->Information_Label->AutoSize = true;
			this->Information_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Information_Label->Location = System::Drawing::Point(12, 18);
			this->Information_Label->Name = L"Information_Label";
			this->Information_Label->Size = System::Drawing::Size(150, 31);
			this->Information_Label->TabIndex = 0;
			this->Information_Label->Text = L"Information";
			// 
			// Information_TextBox
			// 
			this->Information_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Information_TextBox->ForeColor = System::Drawing::Color::Black;
			this->Information_TextBox->Location = System::Drawing::Point(12, 64);
			this->Information_TextBox->Name = L"Information_TextBox";
			this->Information_TextBox->ReadOnly = true;
			this->Information_TextBox->Size = System::Drawing::Size(560, 224);
			this->Information_TextBox->TabIndex = 1;
			this->Information_TextBox->Text = L"";
			// 
			// Save_Information_Button
			// 
			this->Save_Information_Button->Location = System::Drawing::Point(249, 312);
			this->Save_Information_Button->Name = L"Save_Information_Button";
			this->Save_Information_Button->Size = System::Drawing::Size(96, 37);
			this->Save_Information_Button->TabIndex = 2;
			this->Save_Information_Button->Text = L"Save";
			this->Save_Information_Button->UseVisualStyleBackColor = true;
			this->Save_Information_Button->Visible = false;
			this->Save_Information_Button->Click += gcnew System::EventHandler(this, &Text_For_Test::Save_Information_Button_Click);
			// 
			// Text_For_Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->Save_Information_Button);
			this->Controls->Add(this->Information_TextBox);
			this->Controls->Add(this->Information_Label);
			this->Name = L"Text_For_Test";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Text_For_Test";
			this->Load += gcnew System::EventHandler(this, &Text_For_Test::Text_For_Test_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Text_For_Test_Load(System::Object^ sender, System::EventArgs^ e) {
		auto user = User::GetCurrent()[0];
		if (user.is_admin)
		{
			Save_Information_Button->Visible = TRUE;
			Information_TextBox->ReadOnly = FALSE;
		}
		std::string QuestionText = Question::GetTestText();
		Information_TextBox->Text = marshal_as<String^>(QuestionText);
	}
	private: System::Void Save_Information_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string Text = marshal_as<std::string>(Information_TextBox->Text);
		int result = Question::EditTestText(Text);
		if (result)
		{
			MessageBox::Show("Error");
		}
		else {
			MessageBox::Show("Success");
			this->Hide();
		}
	}
	
};
}

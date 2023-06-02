#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

#include "Main.h"
#include "../Auth/User.h"


namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Auth
	/// </summary>
	public ref class Auth : public System::Windows::Forms::Form
	{
	public:
		Auth(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Sign_In_Button;
	protected:

	private: System::Windows::Forms::TextBox^ Password_Input;
	private: System::Windows::Forms::TextBox^ Login_Input;
	private: System::Windows::Forms::Label^ Text_Label;
	private: System::Windows::Forms::Button^ Sign_Up_Button;

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
			this->Sign_In_Button = (gcnew System::Windows::Forms::Button());
			this->Password_Input = (gcnew System::Windows::Forms::TextBox());
			this->Login_Input = (gcnew System::Windows::Forms::TextBox());
			this->Text_Label = (gcnew System::Windows::Forms::Label());
			this->Sign_Up_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Sign_In_Button
			// 
			this->Sign_In_Button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Sign_In_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Sign_In_Button->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Sign_In_Button->FlatAppearance->BorderSize = 0;
			this->Sign_In_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sign_In_Button->Location = System::Drawing::Point(255, 298);
			this->Sign_In_Button->Name = L"Sign_In_Button";
			this->Sign_In_Button->Size = System::Drawing::Size(250, 40);
			this->Sign_In_Button->TabIndex = 3;
			this->Sign_In_Button->Text = L"Sign in";
			this->Sign_In_Button->UseVisualStyleBackColor = false;
			this->Sign_In_Button->Click += gcnew System::EventHandler(this, &Auth::Sign_In_Button_Click);
			// 
			// Password_Input
			// 
			this->Password_Input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Password_Input->Location = System::Drawing::Point(295, 251);
			this->Password_Input->Name = L"Password_Input";
			this->Password_Input->PasswordChar = '※';
			this->Password_Input->Size = System::Drawing::Size(168, 29);
			this->Password_Input->TabIndex = 2;
			// 
			// Login_Input
			// 
			this->Login_Input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Login_Input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Login_Input->Location = System::Drawing::Point(295, 204);
			this->Login_Input->Name = L"Login_Input";
			this->Login_Input->Size = System::Drawing::Size(168, 29);
			this->Login_Input->TabIndex = 1;
			// 
			// Text_Label
			// 
			this->Text_Label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Text_Label->AutoSize = true;
			this->Text_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Text_Label->Location = System::Drawing::Point(280, 153);
			this->Text_Label->Name = L"Text_Label";
			this->Text_Label->Size = System::Drawing::Size(193, 26);
			this->Text_Label->TabIndex = 3;
			this->Text_Label->Text = L"Sign In / Sign Up";
			// 
			// Sign_Up_Button
			// 
			this->Sign_Up_Button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Sign_Up_Button->BackColor = System::Drawing::Color::Transparent;
			this->Sign_Up_Button->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Sign_Up_Button->FlatAppearance->BorderSize = 0;
			this->Sign_Up_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sign_Up_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sign_Up_Button->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Sign_Up_Button->Location = System::Drawing::Point(330, 344);
			this->Sign_Up_Button->Name = L"Sign_Up_Button";
			this->Sign_Up_Button->Size = System::Drawing::Size(100, 45);
			this->Sign_Up_Button->TabIndex = 4;
			this->Sign_Up_Button->Text = L"Sign Up";
			this->Sign_Up_Button->UseVisualStyleBackColor = false;
			this->Sign_Up_Button->Click += gcnew System::EventHandler(this, &Auth::Sign_Up_Button_Click);
			// 
			// Auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->Sign_Up_Button);
			this->Controls->Add(this->Text_Label);
			this->Controls->Add(this->Login_Input);
			this->Controls->Add(this->Password_Input);
			this->Controls->Add(this->Sign_In_Button);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Auth";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Auth";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Sign_In_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		string Login = marshal_as<string>(Login_Input->Text);
		string Password = marshal_as<string>(Password_Input->Text);
		
		if (Login.length() && Password.length())
		{
			if (User::SignIn(Login, Password)) {
					MessageBox::Show("The login or password is incorrect");
			}
			else {
				Main^ MainForm = gcnew Main();
				MainForm->Show();
				this->Hide();
			};
		}else {
			MessageBox::Show("Enter login or password");
		}
	}
	
	private: System::Void Sign_Up_Button_Click(System::Object^ sender, System::EventArgs^ e) {

		string Login = marshal_as<string>(Login_Input->Text);
		string Password = marshal_as<string>(Password_Input->Text);
		if (Login.length() && Password.length()){
			if (User::SignUp(Login, Password))
			{
				MessageBox::Show("Something went wrong");
			}
		}
		else {
			MessageBox::Show("Enter login or password");
		}
	}
};
}

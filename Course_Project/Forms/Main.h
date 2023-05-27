#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

#include "../Auth/User.h"

#include "Text_For_Test.h"
#include "Test_Form.h"
#include "EditTest.h"


namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ To_Test_Button;
	protected:

	private: System::Windows::Forms::Label^ Greeting_Label;
	private: System::Windows::Forms::Button^ Read_Text_Button;
	private: System::Windows::Forms::Button^ History_Button;
	private: System::Windows::Forms::Button^ Edit_Test;

	protected:

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
			this->To_Test_Button = (gcnew System::Windows::Forms::Button());
			this->Greeting_Label = (gcnew System::Windows::Forms::Label());
			this->Read_Text_Button = (gcnew System::Windows::Forms::Button());
			this->History_Button = (gcnew System::Windows::Forms::Button());
			this->Edit_Test = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// To_Test_Button
			// 
			this->To_Test_Button->Location = System::Drawing::Point(12, 129);
			this->To_Test_Button->Name = L"To_Test_Button";
			this->To_Test_Button->Size = System::Drawing::Size(90, 34);
			this->To_Test_Button->TabIndex = 0;
			this->To_Test_Button->Text = L"Go to test";
			this->To_Test_Button->UseVisualStyleBackColor = true;
			this->To_Test_Button->Click += gcnew System::EventHandler(this, &Main::To_Test_Button_Click);
			// 
			// Greeting_Label
			// 
			this->Greeting_Label->AutoSize = true;
			this->Greeting_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Greeting_Label->Location = System::Drawing::Point(12, 19);
			this->Greeting_Label->Name = L"Greeting_Label";
			this->Greeting_Label->Size = System::Drawing::Size(188, 37);
			this->Greeting_Label->TabIndex = 1;
			this->Greeting_Label->Text = L"Hello {login}";
			// 
			// Read_Text_Button
			// 
			this->Read_Text_Button->Location = System::Drawing::Point(12, 89);
			this->Read_Text_Button->Name = L"Read_Text_Button";
			this->Read_Text_Button->Size = System::Drawing::Size(90, 34);
			this->Read_Text_Button->TabIndex = 2;
			this->Read_Text_Button->Text = L"Read Text";
			this->Read_Text_Button->UseVisualStyleBackColor = true;
			this->Read_Text_Button->Click += gcnew System::EventHandler(this, &Main::Read_Text_Button_Click);
			// 
			// History_Button
			// 
			this->History_Button->Location = System::Drawing::Point(12, 169);
			this->History_Button->Name = L"History_Button";
			this->History_Button->Size = System::Drawing::Size(90, 34);
			this->History_Button->TabIndex = 3;
			this->History_Button->Text = L"History";
			this->History_Button->UseVisualStyleBackColor = true;
			this->History_Button->Visible = false;
			// 
			// Edit_Test
			// 
			this->Edit_Test->Location = System::Drawing::Point(12, 209);
			this->Edit_Test->Name = L"Edit_Test";
			this->Edit_Test->Size = System::Drawing::Size(90, 34);
			this->Edit_Test->TabIndex = 4;
			this->Edit_Test->Text = L"Edit Test";
			this->Edit_Test->UseVisualStyleBackColor = true;
			this->Edit_Test->Visible = false;
			this->Edit_Test->Click += gcnew System::EventHandler(this, &Main::Edit_Test_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->Edit_Test);
			this->Controls->Add(this->History_Button);
			this->Controls->Add(this->Read_Text_Button);
			this->Controls->Add(this->Greeting_Label);
			this->Controls->Add(this->To_Test_Button);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_User_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		
		auto user = User::GetCurrent()[0];
		Greeting_Label->Text = "Hello " + marshal_as<String^>(user.login);
		if (user.is_admin)
		{
			History_Button->Visible = TRUE;
			To_Test_Button->Text = "Edit tests";
			Edit_Test->Visible = TRUE;
		}
	}

	private: System::Void Main_User_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}

	private: System::Void Read_Text_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		Text_For_Test^ Text_Form = gcnew Text_For_Test();
		Text_Form->Show();
		
	}

	private: System::Void To_Test_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test_Form^ Test_Form1 = gcnew Test_Form();
		Test_Form1->ShowDialog();
	}
	
private: System::Void Edit_Test_Click(System::Object^ sender, System::EventArgs^ e) {
	EditTest^ Edit_Test_Form = gcnew EditTest();
	Edit_Test_Form->ShowDialog();
}
};
}

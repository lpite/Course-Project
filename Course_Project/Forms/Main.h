#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

#include "../Auth/User.h"

#include "Text_For_Test.h"
#include "Test_Form.h"
#include "EditTest.h"
#include "History_Form.h"
#include "Start.h"



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
	private: System::Windows::Forms::Button^ Clear_Test_Button;
	private: System::Windows::Forms::Button^ About_Button;


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
			this->Clear_Test_Button = (gcnew System::Windows::Forms::Button());
			this->About_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// To_Test_Button
			// 
			this->To_Test_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->To_Test_Button->FlatAppearance->BorderSize = 0;
			this->To_Test_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->To_Test_Button->Location = System::Drawing::Point(12, 129);
			this->To_Test_Button->Name = L"To_Test_Button";
			this->To_Test_Button->Size = System::Drawing::Size(90, 34);
			this->To_Test_Button->TabIndex = 0;
			this->To_Test_Button->Text = L"Go to test";
			this->To_Test_Button->UseVisualStyleBackColor = false;
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
			this->Read_Text_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Read_Text_Button->FlatAppearance->BorderSize = 0;
			this->Read_Text_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Read_Text_Button->Location = System::Drawing::Point(12, 89);
			this->Read_Text_Button->Name = L"Read_Text_Button";
			this->Read_Text_Button->Size = System::Drawing::Size(90, 34);
			this->Read_Text_Button->TabIndex = 2;
			this->Read_Text_Button->Text = L"Read Text";
			this->Read_Text_Button->UseVisualStyleBackColor = false;
			this->Read_Text_Button->Click += gcnew System::EventHandler(this, &Main::Read_Text_Button_Click);
			// 
			// History_Button
			// 
			this->History_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->History_Button->FlatAppearance->BorderSize = 0;
			this->History_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->History_Button->Location = System::Drawing::Point(12, 169);
			this->History_Button->Name = L"History_Button";
			this->History_Button->Size = System::Drawing::Size(90, 34);
			this->History_Button->TabIndex = 3;
			this->History_Button->Text = L"History";
			this->History_Button->UseVisualStyleBackColor = false;
			this->History_Button->Visible = false;
			this->History_Button->Click += gcnew System::EventHandler(this, &Main::History_Button_Click);
			// 
			// Edit_Test
			// 
			this->Edit_Test->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Edit_Test->FlatAppearance->BorderSize = 0;
			this->Edit_Test->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Edit_Test->Location = System::Drawing::Point(12, 209);
			this->Edit_Test->Name = L"Edit_Test";
			this->Edit_Test->Size = System::Drawing::Size(90, 34);
			this->Edit_Test->TabIndex = 4;
			this->Edit_Test->Text = L"Edit Test";
			this->Edit_Test->UseVisualStyleBackColor = false;
			this->Edit_Test->Visible = false;
			this->Edit_Test->Click += gcnew System::EventHandler(this, &Main::Edit_Test_Click);
			// 
			// Clear_Test_Button
			// 
			this->Clear_Test_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Clear_Test_Button->FlatAppearance->BorderSize = 0;
			this->Clear_Test_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear_Test_Button->Location = System::Drawing::Point(12, 249);
			this->Clear_Test_Button->Name = L"Clear_Test_Button";
			this->Clear_Test_Button->Size = System::Drawing::Size(90, 34);
			this->Clear_Test_Button->TabIndex = 5;
			this->Clear_Test_Button->Text = L"Clear Test";
			this->Clear_Test_Button->UseVisualStyleBackColor = false;
			this->Clear_Test_Button->Visible = false;
			this->Clear_Test_Button->Click += gcnew System::EventHandler(this, &Main::Clear_Test_Button_Click);
			// 
			// About_Button
			// 
			this->About_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->About_Button->FlatAppearance->BorderSize = 0;
			this->About_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->About_Button->Location = System::Drawing::Point(12, 289);
			this->About_Button->Name = L"About_Button";
			this->About_Button->Size = System::Drawing::Size(89, 34);
			this->About_Button->TabIndex = 6;
			this->About_Button->Text = L"About";
			this->About_Button->UseVisualStyleBackColor = false;
			this->About_Button->Visible = false;
			this->About_Button->Click += gcnew System::EventHandler(this, &Main::About_Button_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->About_Button);
			this->Controls->Add(this->Clear_Test_Button);
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
		this->Hide();
		Start^ StartForm = gcnew Start();
		StartForm->ShowDialog();
		this->Show();

		auto user = User::GetCurrent();
		Greeting_Label->Text = "Hello " + marshal_as<String^>(user.login);
		if (user.is_admin)
		{
			History_Button->Visible = true;
			To_Test_Button->Text = "Edit tests";
			Edit_Test->Visible = true;
			Clear_Test_Button->Visible = true;
			About_Button->Visible = true;
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
	private: System::Void Clear_Test_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Test::ClearTest())
		{
			MessageBox::Show("Error");
		}
		else {
			MessageBox::Show("Success");
		}
	}
	private: System::Void History_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		History_Form^ HistoryForm = gcnew History_Form();
		HistoryForm->ShowDialog();
	}
private: System::Void About_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	Start^ StartForm = gcnew Start();
	StartForm->ShowDialog();
}
};
}

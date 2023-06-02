#include <msclr/marshal_cppstd.h>

#include "../Auth/User.h"
#include "../Test/Test.h"
#pragma once



namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for History_Form
	/// </summary>
	public ref class History_Form : public System::Windows::Forms::Form
	{
	public:
		History_Form(void)
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
		~History_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ Clear_History_Button;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Clear_History_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"History";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(12, 68);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(760, 429);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &History_Form::listBox1_SelectedIndexChanged);
			// 
			// Clear_History_Button
			// 
			this->Clear_History_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Clear_History_Button->Location = System::Drawing::Point(347, 520);
			this->Clear_History_Button->Name = L"Clear_History_Button";
			this->Clear_History_Button->Size = System::Drawing::Size(86, 29);
			this->Clear_History_Button->TabIndex = 2;
			this->Clear_History_Button->Text = L"Clear history";
			this->Clear_History_Button->UseVisualStyleBackColor = true;
			this->Clear_History_Button->Click += gcnew System::EventHandler(this, &History_Form::Clear_History_Button_Click);
			// 
			// History_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->Clear_History_Button);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"History_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"History_Form";
			this->Load += gcnew System::EventHandler(this, &History_Form::History_Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void History_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		auto Results = Test::GetHistory();
		if (Results.size())
		{
			for (int i = 0; i < Results.size(); i++)
			{
				auto Result = Results[i];
				User::USER User = User::GetUser(1);
				listBox1->Items->Add("Student = "+marshal_as<String^>(User.login) + "; Score = " + Convert::ToString(Result.score));
			}
		}
	}
	private: System::Void Clear_History_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Test::ClearHistory())
		{
			MessageBox::Show("Error");
		}
		else {
			MessageBox::Show("Success");
			this->Close();
		}
	}
};
}

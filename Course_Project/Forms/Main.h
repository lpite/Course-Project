#pragma once

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main_User
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
			this->SuspendLayout();
			// 
			// To_Test_Button
			// 
			this->To_Test_Button->Location = System::Drawing::Point(12, 143);
			this->To_Test_Button->Name = L"To_Test_Button";
			this->To_Test_Button->Size = System::Drawing::Size(90, 34);
			this->To_Test_Button->TabIndex = 0;
			this->To_Test_Button->Text = L"Go to test";
			this->To_Test_Button->UseVisualStyleBackColor = true;
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
			this->Read_Text_Button->Location = System::Drawing::Point(12, 91);
			this->Read_Text_Button->Name = L"Read_Text_Button";
			this->Read_Text_Button->Size = System::Drawing::Size(90, 34);
			this->Read_Text_Button->TabIndex = 2;
			this->Read_Text_Button->Text = L"Read Text";
			this->Read_Text_Button->UseVisualStyleBackColor = true;
			// 
			// Main_User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->Read_Text_Button);
			this->Controls->Add(this->Greeting_Label);
			this->Controls->Add(this->To_Test_Button);
			this->Name = L"Main_User";
			this->Text = L"Main_User";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_User_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_User_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}
	};
}

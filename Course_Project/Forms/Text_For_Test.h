#pragma once

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->Information_TextBox->Location = System::Drawing::Point(12, 64);
			this->Information_TextBox->Name = L"Information_TextBox";
			this->Information_TextBox->Size = System::Drawing::Size(560, 224);
			this->Information_TextBox->TabIndex = 1;
			this->Information_TextBox->Text = L"";
			// 
			// Save_Information_Button
			// 
			this->Save_Information_Button->Location = System::Drawing::Point(246, 312);
			this->Save_Information_Button->Name = L"Save_Information_Button";
			this->Save_Information_Button->Size = System::Drawing::Size(96, 37);
			this->Save_Information_Button->TabIndex = 2;
			this->Save_Information_Button->Text = L"Save";
			this->Save_Information_Button->UseVisualStyleBackColor = true;
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
			this->Text = L"Text_For_Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

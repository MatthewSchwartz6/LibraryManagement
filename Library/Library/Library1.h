#pragma once

namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Library
	/// </summary>
	public ref class Library : public System::Windows::Forms::Form
	{
	public:
		Library(void)
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
		~Library()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  viewAllBooksButton;
	private: System::Windows::Forms::Button^  getAccountInfoButton;
	protected:



	private: System::Windows::Forms::Button^  addBookButton;
	private: System::Windows::Forms::Button^  backToMainButton;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->getAccountInfoButton = (gcnew System::Windows::Forms::Button());
			this->addBookButton = (gcnew System::Windows::Forms::Button());
			this->backToMainButton = (gcnew System::Windows::Forms::Button());
			this->viewAllBooksButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->getAccountInfoButton);
			this->groupBox1->Controls->Add(this->addBookButton);
			this->groupBox1->Controls->Add(this->backToMainButton);
			this->groupBox1->Controls->Add(this->viewAllBooksButton);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(589, 317);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// getAccountInfoButton
			// 
			this->getAccountInfoButton->Location = System::Drawing::Point(38, 212);
			this->getAccountInfoButton->Name = L"getAccountInfoButton";
			this->getAccountInfoButton->Size = System::Drawing::Size(150, 73);
			this->getAccountInfoButton->TabIndex = 4;
			this->getAccountInfoButton->Text = L"Get Account Info";
			this->getAccountInfoButton->UseVisualStyleBackColor = true;
			// 
			// addBookButton
			// 
			this->addBookButton->Location = System::Drawing::Point(415, 36);
			this->addBookButton->Name = L"addBookButton";
			this->addBookButton->Size = System::Drawing::Size(150, 73);
			this->addBookButton->TabIndex = 3;
			this->addBookButton->Text = L"Add Book";
			this->addBookButton->UseVisualStyleBackColor = true;
			// 
			// backToMainButton
			// 
			this->backToMainButton->Location = System::Drawing::Point(415, 212);
			this->backToMainButton->Name = L"backToMainButton";
			this->backToMainButton->Size = System::Drawing::Size(150, 73);
			this->backToMainButton->TabIndex = 2;
			this->backToMainButton->Text = L"Back To Main Menu";
			this->backToMainButton->UseVisualStyleBackColor = true;
			// 
			// viewAllBooksButton
			// 
			this->viewAllBooksButton->Location = System::Drawing::Point(38, 36);
			this->viewAllBooksButton->Name = L"viewAllBooksButton";
			this->viewAllBooksButton->Size = System::Drawing::Size(150, 73);
			this->viewAllBooksButton->TabIndex = 0;
			this->viewAllBooksButton->Text = L"View All Books";
			this->viewAllBooksButton->UseVisualStyleBackColor = true;
			// 
			// Library
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 341);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Library";
			this->Text = L"Library";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

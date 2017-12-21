#pragma once
#include <vector>
#include <string>
#include "UserAccount.h"
#include "LibModel.h"
#include "Library.h"
#include "MyForm.h"
#include "Book.h"





namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		vector<UserAccount *>*users;
		LibModel *library;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  lblWarning;

			 cli::array<String^>^usersForComboBox;
	public:
		MainForm(void)
		{
			Book *book = new  Book();
			book->setBookTitle("The Bible");
			book->setBookAuthor("Various");
			book->setBookType("Holy");
			library = new LibModel();
			library->addBook(*book);
			UserAccount *sample = new UserAccount();
			sample->setUserName("Sample User");
			sample->setAccountCreationDate("Jan. 1, 1970");
			sample->addMoneyToAccount(5.99);
			this->users = new vector<UserAccount *>();
			this->users->push_back(sample);
			InitializeComponent();

			
		}
		MainForm(vector<UserAccount*> *users,LibModel* lib) {

			this->users = new vector<UserAccount*>();
			this->usersForComboBox = gcnew cli::array<String^, 1>(users->size());
			this->library = new LibModel(lib);
			
			InitializeComponent();
			//this->comboBoxUsers->Enabled = true;
			//this->button1->Enabled = true;
			this->comboBoxUsers->BeginUpdate();
			for (unsigned int i = 0; i < users->size(); i++) {
				this->users->push_back(users->at(i));
			}
			for (unsigned int i = 0; i < this->users->size(); i++) {
				string name = this->users->at(i)->getUserName();
				String ^vName = gcnew String(name.c_str());
				
				this->usersForComboBox[i] = vName;
			}
			this->comboBoxUsers->Items->AddRange(usersForComboBox);
			this->comboBoxUsers->Update();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBoxUsers;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBoxUsers = (gcnew System::Windows::Forms::ComboBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->lblWarning = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(211, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lib MGMT";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(200, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Library";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(200, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Create Account";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(200, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 58);
			this->button3->TabIndex = 3;
			this->button3->Text = L"QUIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// comboBoxUsers
			// 
			this->comboBoxUsers->Location = System::Drawing::Point(466, 104);
			this->comboBoxUsers->Name = L"comboBoxUsers";
			this->comboBoxUsers->Size = System::Drawing::Size(121, 21);
			this->comboBoxUsers->TabIndex = 4;
			this->comboBoxUsers->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxUsers_SelectedIndexChanged);
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(441, 68);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(146, 13);
			this->nameLabel->TabIndex = 5;
			this->nameLabel->Text = L"Select Name To Enter Library";
			// 
			// lblWarning
			// 
			this->lblWarning->AutoSize = true;
			this->lblWarning->Location = System::Drawing::Point(200, 68);
			this->lblWarning->Name = L"lblWarning";
			this->lblWarning->Size = System::Drawing::Size(0, 13);
			this->lblWarning->TabIndex = 6;
			this->lblWarning->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(620, 377);
			this->Controls->Add(this->lblWarning);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->comboBoxUsers);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->users != NULL) {
			MyForm ^f = gcnew MyForm(users,this->library);
			f->Show();
			this->Hide();
		}
		else {
			
			MyForm ^f = gcnew MyForm();
			f->Show();
			this->Hide();
			
		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->comboBoxUsers->SelectedIndex == -1)
	{
		this->lblWarning->Text = L"You must select a user to enter the library.";
	}
	else {
		UserAccount *u;
		int index = 0;
		u = this->users->at(this->comboBoxUsers->SelectedIndex);

		TheLibrary ^libForm = gcnew TheLibrary(u, this->library, this->users);
		libForm->Show();
		this->Hide();
	}
}
private: System::Void comboBoxUsers_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

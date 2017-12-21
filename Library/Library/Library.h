#pragma once
#include "UserAccount.h"
#include "LibModel.h"
#include "Book.h"
#include "MyForm1.h"
#include "AddBookForm.h"
#include "CatalogueForm.h"
#include "ATM.h"
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
	public ref class TheLibrary : public System::Windows::Forms::Form
	{
	private:
		UserAccount * user;
		LibModel *library;
	private: System::Windows::Forms::Button^  buttonATM;
	private: System::Windows::Forms::Label^  label1;
			 vector<UserAccount*>*users;
	public:
		TheLibrary(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TheLibrary(UserAccount *u)
		{
			this->user = new UserAccount();
			this->user = u;
			this->library = new LibModel();
			InitializeComponent();
		}
		TheLibrary(UserAccount *u, LibModel *l,vector<UserAccount*>*users) {
			this->user = new UserAccount(u);
			this->library = new LibModel(l);
			this->users = new vector<UserAccount*>();
			for (unsigned int i = 0; i < users->size(); i++) {
				this->users->push_back(users->at(i));
			}
			InitializeComponent();
		}
	public:
		void leave(vector <UserAccount*>*u, LibModel *l);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TheLibrary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonATM = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(7, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 78);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View Catalogue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TheLibrary::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(7, 235);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 78);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Book";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TheLibrary::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(384, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 78);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Get Account Info";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TheLibrary::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(384, 235);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 78);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TheLibrary::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->buttonATM);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(564, 411);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// buttonATM
			// 
			this->buttonATM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonATM->Location = System::Drawing::Point(200, 152);
			this->buttonATM->Name = L"buttonATM";
			this->buttonATM->Size = System::Drawing::Size(161, 78);
			this->buttonATM->TabIndex = 4;
			this->buttonATM->Text = L"ATM";
			this->buttonATM->UseVisualStyleBackColor = true;
			this->buttonATM->Click += gcnew System::EventHandler(this, &TheLibrary::buttonATM_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(113, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Welcome To The Library!";
			// 
			// TheLibrary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(588, 435);
			this->Controls->Add(this->groupBox1);
			this->Name = L"TheLibrary";
			this->Text = L"Library";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//BACK
		
		leave(this->users, this->library);
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//GET ACCOUNT INFO
	MyForm1 ^form = gcnew MyForm1(this->user);
	form->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//ADD BOOK

	AddBookForm ^add = gcnew AddBookForm(this->user, this->library, this->users);
	add->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//View Catalogue Frame

	CatalogueForm ^c = gcnew CatalogueForm(this->user,this->library,this->users);
	c->Show();
	this->Hide();
}
private: System::Void buttonATM_Click(System::Object^  sender, System::EventArgs^  e) {
	ATM ^atm = gcnew ATM(this->user, this->library, this->users);
	atm->Show();
	this->Hide();
}
};
}

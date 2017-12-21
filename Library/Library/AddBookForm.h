#pragma once
#include <msclr\marshal_cppstd.h>
#include "LibModel.h"
#include "Book.h"
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for AddBookForm
	/// </summary>
	public ref class AddBookForm : public System::Windows::Forms::Form
	{
	private:
		LibModel * library;
		Book *book;
		UserAccount *user;
		vector<UserAccount*>*users;
	public:
		AddBookForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddBookForm(UserAccount *u,LibModel *lib,vector<UserAccount*>*users)
		{
			InitializeComponent();
			this->library = new LibModel(lib);
			this->book = new Book();
			this->user = new UserAccount(u);
			this->users = new vector<UserAccount*>();
			for (unsigned int i = 0; i < users->size(); i++) {
				this->users->push_back(users->at(i));
			}
		}
		void addBookAndReturn(UserAccount *u,LibModel *l, vector<UserAccount*>*us);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxType;

	private: System::Windows::Forms::TextBox^  textBoxAuthor;

	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::TextBox^  textBoxTitle;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add A Book!";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->textBoxType);
			this->groupBox1->Controls->Add(this->textBoxAuthor);
			this->groupBox1->Controls->Add(this->buttonCancel);
			this->groupBox1->Controls->Add(this->buttonAdd);
			this->groupBox1->Controls->Add(this->textBoxTitle);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(598, 419);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// textBoxType
			// 
			this->textBoxType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxType->Location = System::Drawing::Point(257, 233);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(265, 26);
			this->textBoxType->TabIndex = 9;
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAuthor->Location = System::Drawing::Point(257, 173);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(265, 26);
			this->textBoxAuthor->TabIndex = 8;
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancel->Location = System::Drawing::Point(309, 342);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(119, 40);
			this->buttonCancel->TabIndex = 7;
			this->buttonCancel->Text = L"CANCEL";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &AddBookForm::buttonCancel_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(121, 342);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(119, 40);
			this->buttonAdd->TabIndex = 6;
			this->buttonAdd->Text = L"ADD";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddBookForm::buttonAdd_Click);
			// 
			// textBoxTitle
			// 
			this->textBoxTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTitle->Location = System::Drawing::Point(257, 118);
			this->textBoxTitle->Name = L"textBoxTitle";
			this->textBoxTitle->Size = System::Drawing::Size(265, 26);
			this->textBoxTitle->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(76, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Title";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(76, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Author";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Type of Print";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 304);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 1;
			// 
			// AddBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 443);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AddBookForm";
			this->Text = L"AddBookForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		Book *book = new Book();
		string title = marshal_as<std::string>(this->textBoxTitle->Text);
		string author = marshal_as<std::string>(this->textBoxAuthor->Text);
		string type = marshal_as<std::string>(this->textBoxType->Text);
		book->setBookTitle(title);
		book->setBookAuthor(author);
		book->setBookType(type);
		this->library->addBook(*book);
		this->addBookAndReturn(this->user, this->library,this->users);
		
	}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->addBookAndReturn(this->user, this->library, this->users);
}
};
}

#pragma once
#include "LibModel.h"
#include "UserAccount.h"
#include "BookDetailForm.h"
#include <msclr\marshal_cppstd.h>
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for CatalogueForm
	/// </summary>
	public ref class CatalogueForm : public System::Windows::Forms::Form
	{
	private:
		UserAccount *user;
		LibModel *library;
		Book *book;
		vector<UserAccount*>*users;
		cli::array<String^, 1> ^booksTitleForListBox;
	private: System::Windows::Forms::Button^  buttonBookCheckIn;

			 cli::array<String^, 1> ^booksAuthorForListBox;
	public:
		CatalogueForm(void)
		{
			InitializeComponent();
			
		}
		CatalogueForm(UserAccount *u, LibModel *l,vector<UserAccount*> *users)
		{
			InitializeComponent();
			this->user = new UserAccount(u);
			this->library = new LibModel(l);
			this->users = new vector<UserAccount*>();
			this->booksTitleForListBox = gcnew cli::array<String^, 1>(this->library->allBooks->size());
			this->booksAuthorForListBox = gcnew cli::array<String^, 1>(this->library->allBooks->size());
			for (unsigned int i = 0; i < users->size(); i++) {
				this->users->push_back(users->at(i));
			}
			this->listBoxBooks->BeginUpdate();
			for (unsigned int i = 0; i < this->library->allBooks->size(); i++) {
				string bookT = this->library->allBooks->at(i).getBookTitle();
				String ^bookTitle = gcnew String(bookT.c_str());
				this->booksTitleForListBox[i] = bookTitle;
			}
			for (unsigned int i = 0; i < this->library->allBooks->size(); i++) {
				string bookA = this->library->allBooks->at(i).getBookAuthor();
				String ^bookAuthor = gcnew String(bookA.c_str());
				this->booksAuthorForListBox[i] = bookAuthor;
			}
			this->listBoxBooks->Items->AddRange(this->booksTitleForListBox);

			cli::array<String^, 1> ^comboBoxChoices = gcnew cli::array<String^, 1>(2);
			comboBoxChoices[0] = L"Title";
			comboBoxChoices[1] = L"Author";
			this->comboBox1->Items->AddRange(comboBoxChoices);

		}
		void CatalogueForm::leave(UserAccount *u, LibModel *l, vector<UserAccount*>*users);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CatalogueForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  buttonBookCheckOut;
	protected:

	private: System::Windows::Forms::Button^  buttonBookDetails;


	private: System::Windows::Forms::ListBox^  listBoxBooks;
	private: System::Windows::Forms::Button^  buttonBookRequest;

	private: System::Windows::Forms::Button^  buttonBookDelete;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  buttonBack;


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
			this->buttonBookCheckIn = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonBookDelete = (gcnew System::Windows::Forms::Button());
			this->buttonBookRequest = (gcnew System::Windows::Forms::Button());
			this->buttonBookCheckOut = (gcnew System::Windows::Forms::Button());
			this->buttonBookDetails = (gcnew System::Windows::Forms::Button());
			this->listBoxBooks = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->buttonBookCheckIn);
			this->groupBox1->Controls->Add(this->buttonBack);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->buttonBookDelete);
			this->groupBox1->Controls->Add(this->buttonBookRequest);
			this->groupBox1->Controls->Add(this->buttonBookCheckOut);
			this->groupBox1->Controls->Add(this->buttonBookDetails);
			this->groupBox1->Controls->Add(this->listBoxBooks);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(505, 430);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// buttonBookCheckIn
			// 
			this->buttonBookCheckIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBookCheckIn->Location = System::Drawing::Point(20, 155);
			this->buttonBookCheckIn->Name = L"buttonBookCheckIn";
			this->buttonBookCheckIn->Size = System::Drawing::Size(145, 39);
			this->buttonBookCheckIn->TabIndex = 9;
			this->buttonBookCheckIn->Text = L"Check In Book";
			this->buttonBookCheckIn->UseVisualStyleBackColor = true;
			this->buttonBookCheckIn->Click += gcnew System::EventHandler(this, &CatalogueForm::button1_Click_1);
			// 
			// buttonBack
			// 
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBack->Location = System::Drawing::Point(20, 375);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(145, 39);
			this->buttonBack->TabIndex = 8;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &CatalogueForm::buttonBack_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(243, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Sort By:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(326, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CatalogueForm::comboBox1_SelectedIndexChanged);
			// 
			// buttonBookDelete
			// 
			this->buttonBookDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBookDelete->Location = System::Drawing::Point(20, 220);
			this->buttonBookDelete->Name = L"buttonBookDelete";
			this->buttonBookDelete->Size = System::Drawing::Size(145, 39);
			this->buttonBookDelete->TabIndex = 5;
			this->buttonBookDelete->Text = L"Delete Book";
			this->buttonBookDelete->UseVisualStyleBackColor = true;
			this->buttonBookDelete->Click += gcnew System::EventHandler(this, &CatalogueForm::buttonBookDelete_Click);
			// 
			// buttonBookRequest
			// 
			this->buttonBookRequest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBookRequest->Location = System::Drawing::Point(20, 297);
			this->buttonBookRequest->Name = L"buttonBookRequest";
			this->buttonBookRequest->Size = System::Drawing::Size(145, 39);
			this->buttonBookRequest->TabIndex = 4;
			this->buttonBookRequest->Text = L"Request Book";
			this->buttonBookRequest->UseVisualStyleBackColor = true;
			this->buttonBookRequest->Click += gcnew System::EventHandler(this, &CatalogueForm::buttonBookRequest_Click);
			// 
			// buttonBookCheckOut
			// 
			this->buttonBookCheckOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBookCheckOut->Location = System::Drawing::Point(20, 92);
			this->buttonBookCheckOut->Name = L"buttonBookCheckOut";
			this->buttonBookCheckOut->Size = System::Drawing::Size(145, 39);
			this->buttonBookCheckOut->TabIndex = 3;
			this->buttonBookCheckOut->Text = L"Check OutBook";
			this->buttonBookCheckOut->UseVisualStyleBackColor = true;
			this->buttonBookCheckOut->Click += gcnew System::EventHandler(this, &CatalogueForm::buttonBookCheckOut_Click);
			// 
			// buttonBookDetails
			// 
			this->buttonBookDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBookDetails->Location = System::Drawing::Point(20, 29);
			this->buttonBookDetails->Name = L"buttonBookDetails";
			this->buttonBookDetails->Size = System::Drawing::Size(145, 39);
			this->buttonBookDetails->TabIndex = 2;
			this->buttonBookDetails->Text = L"Book Details";
			this->buttonBookDetails->UseVisualStyleBackColor = true;
			this->buttonBookDetails->Click += gcnew System::EventHandler(this, &CatalogueForm::button1_Click);
			// 
			// listBoxBooks
			// 
			this->listBoxBooks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxBooks->FormattingEnabled = true;
			this->listBoxBooks->ItemHeight = 20;
			this->listBoxBooks->Location = System::Drawing::Point(207, 47);
			this->listBoxBooks->Name = L"listBoxBooks";
			this->listBoxBooks->Size = System::Drawing::Size(240, 364);
			this->listBoxBooks->TabIndex = 0;
			// 
			// CatalogueForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 454);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CatalogueForm";
			this->Text = L"CatalogueForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Book details
	if (this->library->allBooks->size() == 0) return;
	if (this->listBoxBooks->SelectedIndex != -1) {
		Book book;
		book = this->library->allBooks->at(this->listBoxBooks->SelectedIndex);
		BookDetailForm ^b = gcnew BookDetailForm(&book);
		b->Show();
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	this->listBoxBooks->Items->Clear();
		switch (comboBox1->SelectedIndex)
		{
		case 0:
			this->listBoxBooks->Items->AddRange(this->booksTitleForListBox);
			break;

		case 1:
			this->listBoxBooks->Items->AddRange(this->booksAuthorForListBox);
			break;
		default:
			this->listBoxBooks->Items->AddRange(this->booksTitleForListBox);
			break;
		}
}


private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e) {
	leave(this->user, this->library, this->users);
}
private: System::Void buttonBookDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	//delete book
	if (this->library->allBooks->size() == 0) return;
	if (this->listBoxBooks->SelectedIndex == -1)return;
	int index = this->listBoxBooks->SelectedIndex;
	this->library->allBooks->erase(this->library->allBooks->begin() + index);
	CatalogueForm ^c = gcnew CatalogueForm(this->user,this->library,this->users);
	c->Show();
	this->Hide();

}
private: System::Void buttonBookCheckOut_Click(System::Object^  sender, System::EventArgs^  e) {
	//check out book
	if (this->listBoxBooks->SelectedIndex == -1) return;
	if (this->user->getUserBalanace() <= 0) {
		MessageBox::Show(L"You must add more money to your account before checking out a book!", L"Attention!", MessageBoxButtons::OK);
		return;
	}
	
	int index = this->listBoxBooks->SelectedIndex;
	if (this->library->allBooks->at(index).isCheckedOut()) {
		MessageBox::Show(L"We're sorry, that book is already checked out.", L"Error", MessageBoxButtons::OK);
		return;
	}
	DateTime currentTime = DateTime::Now;
	String ^currDate = currentTime.ToShortDateString();
	string date = marshal_as<std::string>(currDate);
	
	this->user->payForBook(2.00);
	this->library->allBooks->at(index).setDateCheckedOut(date);
	this->library->allBooks->at(index).setNameCheckedOut(this->user->getUserName());
	this->library->allBooks->at(index).changeBookStatus(true);
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//check in book
	if (this->listBoxBooks->SelectedIndex == -1) return;
	int index = this->listBoxBooks->SelectedIndex;
	if (!(this->library->allBooks->at(index).isCheckedOut())) {
		MessageBox::Show(L"This book is not checked out.", L"Error", MessageBoxButtons::OK);
		return;
	}
	if (this->library->allBooks->at(index).getNameCheckedOut() != this->user->getUserName()) {
		return;
	}
	this->library->allBooks->at(index).setDateCheckedOut("Available");
	this->library->allBooks->at(index).setNameCheckedOut("");
	this->library->allBooks->at(index).changeBookStatus(false);
	if (this->library->allBooks->at(index).isPending()) {
		MessageBox::Show(L"Thank you for checking the book in. Someone else was waiting for it.", L"Thank You", MessageBoxButtons::OK);
		
	}
}
private: System::Void buttonBookRequest_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->listBoxBooks->SelectedIndex == -1) return;
	int index = this->listBoxBooks->SelectedIndex;
	if (!(this->library->allBooks->at(index).isCheckedOut())) {
		MessageBox::Show(L"This book is not checked out.", L"Error", MessageBoxButtons::OK);
		return;
	}
	if (this->library->allBooks->at(index).isPending()) {
		MessageBox::Show(L"Someone else is already waiting on this book.", L"Error", MessageBoxButtons::OK);
		
		return;
	}
	
	if (this->library->allBooks->at(index).getNamePending() == this->library->allBooks->at(index).getNameCheckedOut())
	{
		MessageBox::Show(L"You can not request the book while you have the book.", L"Error", MessageBoxButtons::OK);

		return;
	}
	this->library->allBooks->at(index).changePendingStatus(true);
	this->library->allBooks->at(index).setNamePending(this->user->getUserName());
	//this->library->allBooks->at(index)
}
};
}

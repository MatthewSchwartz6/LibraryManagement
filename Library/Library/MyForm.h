#pragma once
#include <msclr\marshal_cppstd.h>
#include "UserAccount.h"
#include "LibModel.h"
#include <vector>
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		vector<UserAccount *>*users;
		void leave(vector<UserAccount *>*users,LibModel*l);
		LibModel *library;
	public:
		MyForm(void)
		{
			users = new vector<UserAccount*>();
			InitializeComponent();
			DateTime currentTime = DateTime::Now;
			String ^currDate = currentTime.ToShortDateString();			
			this->txtBoxDate->Text = currDate;
		}
		MyForm( vector<UserAccount*>*userArray,LibModel *lib) {

			this->users = new vector<UserAccount*>();
				for (unsigned int i = 0; i < userArray->size(); i++) {
					this->users->push_back(userArray->at(i));
				}
				this->library = new LibModel(lib);
				
			InitializeComponent();
			DateTime currentTime = DateTime::Now;
			String ^currDate = currentTime.ToShortDateString();
			this->txtBoxDate->Text = currDate;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::TextBox^  txtBoxBalance;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtBoxDate;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::TextBox^  txtBoxName;


	private: System::Windows::Forms::Label^  label1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->txtBoxBalance = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->txtBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btnCancel);
			this->groupBox1->Controls->Add(this->txtBoxBalance);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtBoxDate);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->btnOK);
			this->groupBox1->Controls->Add(this->txtBoxName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(730, 428);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(248, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Create Account";
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(456, 346);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(134, 52);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm::btnCancel_Click);
			// 
			// txtBoxBalance
			// 
			this->txtBoxBalance->Location = System::Drawing::Point(350, 237);
			this->txtBoxBalance->Name = L"txtBoxBalance";
			this->txtBoxBalance->Size = System::Drawing::Size(279, 20);
			this->txtBoxBalance->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(109, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Balance $";
			// 
			// txtBoxDate
			// 
			this->txtBoxDate->Location = System::Drawing::Point(350, 176);
			this->txtBoxDate->Name = L"txtBoxDate";
			this->txtBoxDate->Size = System::Drawing::Size(279, 20);
			this->txtBoxDate->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(109, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Date Created";
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(193, 346);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(134, 52);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm::btnOK_Click);
			// 
			// txtBoxName
			// 
			this->txtBoxName->Location = System::Drawing::Point(350, 107);
			this->txtBoxName->Name = L"txtBoxName";
			this->txtBoxName->Size = System::Drawing::Size(279, 20);
			this->txtBoxName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 452);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
		UserAccount *user = new UserAccount();
		user->setUserName(marshal_as<std::string>(txtBoxName->Text));
		user->setAccountCreationDate(marshal_as<std::string>(txtBoxDate->Text));
		double balance;
		String ^money = gcnew String(txtBoxBalance->Text);
		if (Double::TryParse(money, balance)) {
			user->addMoneyToAccount(balance);
		}
		else {
			user->addMoneyToAccount(0);
		}
		users->push_back(user);
		//System:Console::Write(user);
		this->leave(this->users,this->library);
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->leave(this->users, this->library);
	
}
};
}

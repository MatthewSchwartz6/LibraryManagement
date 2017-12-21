#pragma once
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

	/// <summary>
	/// Summary for ATM
	/// </summary>
	public ref class ATM : public System::Windows::Forms::Form
	{
	private:
		double balance;
		UserAccount * user;
		vector<UserAccount*>*users;
	private: System::Windows::Forms::TextBox^  textBoxAmount;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblBalance;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonDeposit;
	private: System::Windows::Forms::Button^  buttonWithdraw;
			 LibModel *library;
	public:
		ATM(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ATM(UserAccount *u, LibModel *l, vector<UserAccount*>*users)
		{
			this->user = new UserAccount(u);
			this->library = new LibModel(l);
			this->users = new vector<UserAccount*>();
			for (unsigned int i = 0; i < users->size(); i++) {
				this->users->push_back(users->at(i));
			}
			InitializeComponent();
			this->balance = this->user->getUserBalanace();
			this->lblBalance->Text = Convert::ToString(balance);
		}
		void ATM::Leave(UserAccount *u, LibModel *l, vector<UserAccount*>*users);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ATM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			this->textBoxAmount = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonDeposit = (gcnew System::Windows::Forms::Button());
			this->buttonWithdraw = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->textBoxAmount);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lblBalance);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->buttonDeposit);
			this->groupBox1->Controls->Add(this->buttonWithdraw);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(595, 370);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// textBoxAmount
			// 
			this->textBoxAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAmount->Location = System::Drawing::Point(330, 187);
			this->textBoxAmount->Name = L"textBoxAmount";
			this->textBoxAmount->Size = System::Drawing::Size(100, 26);
			this->textBoxAmount->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(131, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Amount";
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalance->Location = System::Drawing::Point(377, 110);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(0, 20);
			this->lblBalance->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Balance:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(243, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ATM";
			// 
			// buttonDeposit
			// 
			this->buttonDeposit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDeposit->Location = System::Drawing::Point(330, 272);
			this->buttonDeposit->Name = L"buttonDeposit";
			this->buttonDeposit->Size = System::Drawing::Size(127, 48);
			this->buttonDeposit->TabIndex = 1;
			this->buttonDeposit->Text = L"DEPOSIT";
			this->buttonDeposit->UseVisualStyleBackColor = true;
			this->buttonDeposit->Click += gcnew System::EventHandler(this, &ATM::buttonDeposit_Click);
			// 
			// buttonWithdraw
			// 
			this->buttonWithdraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonWithdraw->Location = System::Drawing::Point(96, 272);
			this->buttonWithdraw->Name = L"buttonWithdraw";
			this->buttonWithdraw->Size = System::Drawing::Size(127, 48);
			this->buttonWithdraw->TabIndex = 0;
			this->buttonWithdraw->Text = L"WITHDRAW";
			this->buttonWithdraw->UseVisualStyleBackColor = true;
			this->buttonWithdraw->Click += gcnew System::EventHandler(this, &ATM::buttonWithdraw_Click);
			// 
			// ATM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 394);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ATM";
			this->Text = L"ATM";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonWithdraw_Click(System::Object^  sender, System::EventArgs^  e) {
		double balance;
		String ^money = gcnew String(this->textBoxAmount->Text);
		if (Double::TryParse(money, balance)) {
			if (balance > this->balance) {
				MessageBox::Show(L"You can not withdraw more than you have.", L"Error", MessageBoxButtons::OK);
				return;
			}
			user->payForBook(balance);
		}
		else {
			user->payForBook(0);
		}
		Leave(this->user, this->library, this->users);
	}
private: System::Void buttonDeposit_Click(System::Object^  sender, System::EventArgs^  e) {
	double balance;
	String ^money = gcnew String(this->textBoxAmount->Text);
	if (Double::TryParse(money, balance)) {
		user->addMoneyToAccount(balance);
	}
	else {
		user->addMoneyToAccount(0);
	}
	Leave(this->user, this->library, this->users);
	}

};
}

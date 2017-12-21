#pragma once
#include "Book.h"
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
	/// Summary for BookDetailForm
	/// </summary>
	public ref class BookDetailForm : public System::Windows::Forms::Form
	{
		
	public:
		BookDetailForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BookDetailForm(Book *book)
		{
			InitializeComponent();
			
			this->lblTitle->Text = gcnew String(book->getBookTitle().c_str());
			this->lblAuthor->Text = gcnew String(book->getBookAuthor().c_str());
			this->lblType->Text = gcnew String(book->getBookType().c_str());
			if (book->isCheckedOut()) this->lblStatus->Text = L"Checked Out";
			else this->lblStatus->Text = L"Available";
			if (book->isPending()) this->lblWaitingBool->Text = L"Yes";
			else this->lblWaitingBool->Text = L"No one waiting";

			this->lblCheckedOutBy->Text = gcnew String(book->getNameCheckedOut().c_str());
			this->lblNameWaiting->Text = gcnew String(book->getNamePending().c_str());
			this->lblDateCheckedOut->Text = gcnew String(book->getDateCheckedOut().c_str());
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BookDetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblCheckedOutBy;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblNameWaiting;
	private: System::Windows::Forms::Label^  lblWaitingBool;
	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::Label^  lblType;
	private: System::Windows::Forms::Label^  lblAuthor;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblDateCheckedOut;

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
			this->lblDateCheckedOut = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblCheckedOutBy = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblNameWaiting = (gcnew System::Windows::Forms::Label());
			this->lblWaitingBool = (gcnew System::Windows::Forms::Label());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->lblDateCheckedOut);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->lblCheckedOutBy);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->lblNameWaiting);
			this->groupBox1->Controls->Add(this->lblWaitingBool);
			this->groupBox1->Controls->Add(this->lblStatus);
			this->groupBox1->Controls->Add(this->lblType);
			this->groupBox1->Controls->Add(this->lblAuthor);
			this->groupBox1->Controls->Add(this->lblTitle);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(501, 376);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &BookDetailForm::groupBox1_Enter);
			// 
			// lblDateCheckedOut
			// 
			this->lblDateCheckedOut->AutoSize = true;
			this->lblDateCheckedOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDateCheckedOut->Location = System::Drawing::Point(268, 245);
			this->lblDateCheckedOut->Name = L"lblDateCheckedOut";
			this->lblDateCheckedOut->Size = System::Drawing::Size(0, 20);
			this->lblDateCheckedOut->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(32, 245);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label8->Size = System::Drawing::Size(145, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Date Checked Out:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(163, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 44);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BookDetailForm::button1_Click);
			// 
			// lblCheckedOutBy
			// 
			this->lblCheckedOutBy->AutoSize = true;
			this->lblCheckedOutBy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCheckedOutBy->Location = System::Drawing::Point(268, 202);
			this->lblCheckedOutBy->Name = L"lblCheckedOutBy";
			this->lblCheckedOutBy->Size = System::Drawing::Size(0, 20);
			this->lblCheckedOutBy->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(31, 202);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Chcekd Out By:";
			// 
			// lblNameWaiting
			// 
			this->lblNameWaiting->AutoSize = true;
			this->lblNameWaiting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameWaiting->Location = System::Drawing::Point(268, 311);
			this->lblNameWaiting->Name = L"lblNameWaiting";
			this->lblNameWaiting->Size = System::Drawing::Size(0, 20);
			this->lblNameWaiting->TabIndex = 12;
			// 
			// lblWaitingBool
			// 
			this->lblWaitingBool->AutoSize = true;
			this->lblWaitingBool->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWaitingBool->Location = System::Drawing::Point(268, 276);
			this->lblWaitingBool->Name = L"lblWaitingBool";
			this->lblWaitingBool->Size = System::Drawing::Size(0, 20);
			this->lblWaitingBool->TabIndex = 11;
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatus->Location = System::Drawing::Point(268, 162);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(0, 20);
			this->lblStatus->TabIndex = 10;
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblType->Location = System::Drawing::Point(268, 123);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(0, 20);
			this->lblType->TabIndex = 9;
			// 
			// lblAuthor
			// 
			this->lblAuthor->AutoSize = true;
			this->lblAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAuthor->Location = System::Drawing::Point(268, 85);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(0, 20);
			this->lblAuthor->TabIndex = 8;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(268, 43);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(0, 20);
			this->lblTitle->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(31, 311);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Name Waiting";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Someone Waiting\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Status";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Type:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Author:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Title:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(170, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Book Details";
			// 
			// BookDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 400);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BookDetailForm";
			this->Text = L"BookDetailForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}

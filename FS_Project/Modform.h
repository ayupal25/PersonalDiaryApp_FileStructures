#pragma once
#include "record.h";
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>


namespace FSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Modform
	/// </summary>
	public ref class Modform : public System::Windows::Forms::Form
	{
	public:
		Modform(void)
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
		~Modform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ datebox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ timebox;
	private: System::Windows::Forms::Label^ namel;
	private: System::Windows::Forms::TextBox^ namebox;


	private: System::Windows::Forms::Label^ placel;
	private: System::Windows::Forms::TextBox^ placebox;


	private: System::Windows::Forms::Label^ durationl;
	private: System::Windows::Forms::TextBox^ durationbox;

	private: System::Windows::Forms::Label^ notel;
	private: System::Windows::Forms::TextBox^ notebox;
	private: System::Windows::Forms::ListBox^ opbox;
	private: System::Windows::Forms::Button^ btnsbt;
	private: System::Windows::Forms::Button^ btncls;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->datebox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timebox = (gcnew System::Windows::Forms::TextBox());
			this->namel = (gcnew System::Windows::Forms::Label());
			this->namebox = (gcnew System::Windows::Forms::TextBox());
			this->placel = (gcnew System::Windows::Forms::Label());
			this->placebox = (gcnew System::Windows::Forms::TextBox());
			this->durationl = (gcnew System::Windows::Forms::Label());
			this->durationbox = (gcnew System::Windows::Forms::TextBox());
			this->notel = (gcnew System::Windows::Forms::Label());
			this->notebox = (gcnew System::Windows::Forms::TextBox());
			this->opbox = (gcnew System::Windows::Forms::ListBox());
			this->btnsbt = (gcnew System::Windows::Forms::Button());
			this->btncls = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(431, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modify Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(338, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter date (dd-mm-yyyy): ";
			// 
			// datebox
			// 
			this->datebox->Location = System::Drawing::Point(67, 183);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(332, 26);
			this->datebox->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(154, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter time: ";
			// 
			// timebox
			// 
			this->timebox->Location = System::Drawing::Point(67, 265);
			this->timebox->Name = L"timebox";
			this->timebox->Size = System::Drawing::Size(332, 26);
			this->timebox->TabIndex = 4;
			// 
			// namel
			// 
			this->namel->AutoSize = true;
			this->namel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namel->Location = System::Drawing::Point(144, 304);
			this->namel->Name = L"namel";
			this->namel->Size = System::Drawing::Size(169, 32);
			this->namel->TabIndex = 5;
			this->namel->Text = L"Enter name:";
			// 
			// namebox
			// 
			this->namebox->Location = System::Drawing::Point(67, 352);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(332, 26);
			this->namebox->TabIndex = 6;
			// 
			// placel
			// 
			this->placel->AutoSize = true;
			this->placel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->placel->Location = System::Drawing::Point(146, 391);
			this->placel->Name = L"placel";
			this->placel->Size = System::Drawing::Size(167, 32);
			this->placel->TabIndex = 7;
			this->placel->Text = L"Enter place:";
			// 
			// placebox
			// 
			this->placebox->Location = System::Drawing::Point(67, 434);
			this->placebox->Name = L"placebox";
			this->placebox->Size = System::Drawing::Size(332, 26);
			this->placebox->TabIndex = 8;
			// 
			// durationl
			// 
			this->durationl->AutoSize = true;
			this->durationl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->durationl->Location = System::Drawing::Point(132, 472);
			this->durationl->Name = L"durationl";
			this->durationl->Size = System::Drawing::Size(202, 32);
			this->durationl->TabIndex = 9;
			this->durationl->Text = L"Enter duration:";
			// 
			// durationbox
			// 
			this->durationbox->Location = System::Drawing::Point(67, 513);
			this->durationbox->Name = L"durationbox";
			this->durationbox->Size = System::Drawing::Size(332, 26);
			this->durationbox->TabIndex = 10;
			// 
			// notel
			// 
			this->notel->AutoSize = true;
			this->notel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->notel->Location = System::Drawing::Point(146, 551);
			this->notel->Name = L"notel";
			this->notel->Size = System::Drawing::Size(161, 32);
			this->notel->TabIndex = 11;
			this->notel->Text = L"Enter note: ";
			// 
			// notebox
			// 
			this->notebox->Location = System::Drawing::Point(67, 593);
			this->notebox->Name = L"notebox";
			this->notebox->Size = System::Drawing::Size(332, 26);
			this->notebox->TabIndex = 12;
			// 
			// opbox
			// 
			this->opbox->FormattingEnabled = true;
			this->opbox->ItemHeight = 20;
			this->opbox->Location = System::Drawing::Point(515, 125);
			this->opbox->Name = L"opbox";
			this->opbox->Size = System::Drawing::Size(554, 404);
			this->opbox->TabIndex = 13;
			// 
			// btnsbt
			// 
			this->btnsbt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsbt->Location = System::Drawing::Point(671, 572);
			this->btnsbt->Name = L"btnsbt";
			this->btnsbt->Size = System::Drawing::Size(117, 47);
			this->btnsbt->TabIndex = 14;
			this->btnsbt->Text = L"Submit";
			this->btnsbt->UseVisualStyleBackColor = true;
			this->btnsbt->Click += gcnew System::EventHandler(this, &Modform::btnsbt_Click);
			// 
			// btncls
			// 
			this->btncls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncls->Location = System::Drawing::Point(842, 572);
			this->btncls->Name = L"btncls";
			this->btncls->Size = System::Drawing::Size(113, 47);
			this->btncls->TabIndex = 15;
			this->btncls->Text = L"Close";
			this->btncls->UseVisualStyleBackColor = true;
			this->btncls->Click += gcnew System::EventHandler(this, &Modform::btncls_Click);
			// 
			// Modform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1107, 682);
			this->Controls->Add(this->btncls);
			this->Controls->Add(this->btnsbt);
			this->Controls->Add(this->opbox);
			this->Controls->Add(this->notebox);
			this->Controls->Add(this->notel);
			this->Controls->Add(this->durationbox);
			this->Controls->Add(this->durationl);
			this->Controls->Add(this->placebox);
			this->Controls->Add(this->placel);
			this->Controls->Add(this->namebox);
			this->Controls->Add(this->namel);
			this->Controls->Add(this->timebox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->datebox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Modform";
			this->Text = L"Modform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchtomenu = false;
	private: System::Void btnsbt_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream f,f1;
		int c = 0, flag = 0;
		record customer,entry;
		char filename[10];

		String^ file = this->datebox->Text;
		string str = (const char*)(Marshal::StringToHGlobalAnsi(file)).ToPointer();
		strcpy(filename, str.c_str());
		if (file->Length == 0) {
			MessageBox::Show("Please enter date", "Date missing", MessageBoxButtons::OK);
			return;
		}
		f.open(filename, ios::in | ios::binary);
		if (!f)
		{
			MessageBox::Show("Record missing", "System error", MessageBoxButtons::OK);
			return;
		}
		String^ t = this->timebox->Text;
		string str1 = (const char*)(Marshal::StringToHGlobalAnsi(t)).ToPointer();
		while (f.read((char*)&customer, sizeof(record)))
		{
			c++;
		
			if (strcmp(customer.time, str1.c_str()) == 0) {
				this->opbox->Items->Add("OLD RECORD");
				this->opbox->Items->Add("Record No. : ");
				this->opbox->Items->Add(c);
				this->opbox->Items->Add("Time: ");
				this->opbox->Items->Add(gcnew String(customer.time));
				this->opbox->Items->Add("Meeting with: ");
				this->opbox->Items->Add(gcnew String(customer.name));
				this->opbox->Items->Add("Meeting at: ");
				this->opbox->Items->Add(gcnew String(customer.place));
				this->opbox->Items->Add("Duration: ");
				this->opbox->Items->Add(gcnew String(customer.duration));
				this->opbox->Items->Add("Note: ");
				this->opbox->Items->Add(gcnew String(customer.note));
				this->opbox->Items->Add(" ");
				strcpy(customer.time, str1.c_str());
				String^ n = this->namebox->Text;
				string str2 = (const char*)(Marshal::StringToHGlobalAnsi(n)).ToPointer();
				strcpy(customer.name, str2.c_str());
				String^ p = this->placebox->Text;
				string str3 = (const char*)(Marshal::StringToHGlobalAnsi(p)).ToPointer();
				strcpy(customer.place, str3.c_str());
				String^ d = this->durationbox->Text;
				string str4 = (const char*)(Marshal::StringToHGlobalAnsi(d)).ToPointer();
				strcpy(customer.duration, str4.c_str());
				String^ no = this->notebox->Text;
				string str5 = (const char*)(Marshal::StringToHGlobalAnsi(no)).ToPointer();
				strcpy(customer.note, str5.c_str());
				f.close();
				f.open(filename, ios::in | ios::binary | ios::out | ios::ate);
				int location = (c - 1) * sizeof(customer);
				f.seekp(location);
				f.write((char*)&customer, sizeof(record));
				f.close();
				flag = 1;
			}
		}
		f1.open(filename, ios::in | ios::binary);
		
		while (f1.read((char*)&entry, sizeof(record)))
		{
			c++;
			this->opbox->Items->Add("NEW RECORD");
			this->opbox->Items->Add("Record No. : ");
			this->opbox->Items->Add(c);
			this->opbox->Items->Add("Time: ");
			this->opbox->Items->Add(gcnew String(entry.time));
			this->opbox->Items->Add("Meeting with: ");
			this->opbox->Items->Add(gcnew String(entry.name));
			this->opbox->Items->Add("Meeting at: ");
			this->opbox->Items->Add(gcnew String(entry.place));
			this->opbox->Items->Add("Duration: ");
			this->opbox->Items->Add(gcnew String(entry.duration));
			this->opbox->Items->Add("Note: ");
			this->opbox->Items->Add(gcnew String(entry.note));
			this->opbox->Items->Add(" ");
		}

		if (flag == 1) {
			MessageBox::Show("Record modified successfully", "Success", MessageBoxButtons::OK);
			return;
		}
		else {
			MessageBox::Show("Record not found", "Failure", MessageBoxButtons::OK);
			return;
		}
		this->switchtomenu = true;
		this->Close();
	}

	private: System::Void btncls_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtomenu = true;
		this->Close();
	}
};
}

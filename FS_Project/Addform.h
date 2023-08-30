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
	/// Summary for Addform
	/// </summary>
	public ref class Addform : public System::Windows::Forms::Form
	{
	public:
		Addform(void)
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
		~Addform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::TextBox^ notebox;
	private: System::Windows::Forms::Button^ btnsubmit;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::TextBox^ durationbox;
	private: System::Windows::Forms::TextBox^ datebox;
	private: System::Windows::Forms::TextBox^ timebox;
	private: System::Windows::Forms::TextBox^ namebox;
	private: System::Windows::Forms::TextBox^ placebox;






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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->notebox = (gcnew System::Windows::Forms::TextBox());
			this->btnsubmit = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->durationbox = (gcnew System::Windows::Forms::TextBox());
			this->datebox = (gcnew System::Windows::Forms::TextBox());
			this->timebox = (gcnew System::Windows::Forms::TextBox());
			this->namebox = (gcnew System::Windows::Forms::TextBox());
			this->placebox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(304, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(326, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ENTER DATE OF YOUR RECORD:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(211, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ENTER TIME:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(201, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ENTER NAME:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(193, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"ENTER PLACE:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(156, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"ENTER DURATION:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(203, 395);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"ENTER NOTE:";
			// 
			// notebox
			// 
			this->notebox->Location = System::Drawing::Point(354, 394);
			this->notebox->Name = L"notebox";
			this->notebox->Size = System::Drawing::Size(338, 26);
			this->notebox->TabIndex = 12;
			// 
			// btnsubmit
			// 
			this->btnsubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubmit->Location = System::Drawing::Point(198, 469);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(120, 40);
			this->btnsubmit->TabIndex = 13;
			this->btnsubmit->Text = L"SUBMIT";
			this->btnsubmit->UseVisualStyleBackColor = true;
			this->btnsubmit->Click += gcnew System::EventHandler(this, &Addform::btnsubmit_Click);
			// 
			// btncancel
			// 
			this->btncancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancel->Location = System::Drawing::Point(354, 469);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(127, 40);
			this->btncancel->TabIndex = 14;
			this->btncancel->Text = L"CANCEL";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &Addform::btncancel_Click);
			// 
			// durationbox
			// 
			this->durationbox->Location = System::Drawing::Point(355, 338);
			this->durationbox->Name = L"durationbox";
			this->durationbox->Size = System::Drawing::Size(337, 26);
			this->durationbox->TabIndex = 15;
			// 
			// datebox
			// 
			this->datebox->Location = System::Drawing::Point(355, 122);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(337, 26);
			this->datebox->TabIndex = 16;
			// 
			// timebox
			// 
			this->timebox->Location = System::Drawing::Point(355, 175);
			this->timebox->Name = L"timebox";
			this->timebox->Size = System::Drawing::Size(337, 26);
			this->timebox->TabIndex = 17;
			// 
			// namebox
			// 
			this->namebox->Location = System::Drawing::Point(355, 228);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(337, 26);
			this->namebox->TabIndex = 18;
			// 
			// placebox
			// 
			this->placebox->Location = System::Drawing::Point(354, 285);
			this->placebox->Name = L"placebox";
			this->placebox->Size = System::Drawing::Size(338, 26);
			this->placebox->TabIndex = 19;
			// 
			// Addform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 576);
			this->Controls->Add(this->placebox);
			this->Controls->Add(this->namebox);
			this->Controls->Add(this->timebox);
			this->Controls->Add(this->datebox);
			this->Controls->Add(this->durationbox);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnsubmit);
			this->Controls->Add(this->notebox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Addform";
			this->Text = L"Addform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public: bool switchtomenu = false;
	private: System::Void btnsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream f,f1;
		record entry,customer;
		char filename[10];
		String^ file = this->datebox->Text;
		string str = (const char*)(Marshal::StringToHGlobalAnsi(file)).ToPointer();
		strcpy(filename,str.c_str());
		if (file->Length == 0) {
			MessageBox::Show("Please enter date", "Date missing", MessageBoxButtons::OK);
		}

		f.open(filename, ios::in | ios::binary | ios::app | ios::out);
		f1.open(filename, ios::in | ios::binary);
		if (!f.is_open())
		{
			MessageBox::Show("System error", "File Not Open", MessageBoxButtons::OK);
			return;
		}
		String^ t = this->timebox->Text;
		string str1 = (const char*)(Marshal::StringToHGlobalAnsi(t)).ToPointer();
		while (f1.read((char*)&customer, sizeof(record))) {
			if (strcmp(customer.time, str1.c_str()) == 0) {
				MessageBox::Show("Meeting at this time is already available", "Error", MessageBoxButtons::OK);
				this->switchtomenu = true;
				this->Close();
				return;
			}
		}
		strcpy(entry.time, str1.c_str());
		String^ n = this->namebox->Text;
		string str2 = (const char*)(Marshal::StringToHGlobalAnsi(n)).ToPointer();
		strcpy(entry.name, str2.c_str());
		String^ p = this->placebox->Text;
		string str3 = (const char*)(Marshal::StringToHGlobalAnsi(p)).ToPointer();
		strcpy(entry.place, str3.c_str());
		String^ d = this->durationbox->Text;
		string str4 = (const char*)(Marshal::StringToHGlobalAnsi(d)).ToPointer();
		strcpy(entry.duration, str4.c_str());
		String^ no = this->notebox->Text;
		string str5 = (const char*)(Marshal::StringToHGlobalAnsi(no)).ToPointer();
		strcpy(entry.note, str5.c_str());
		f.write((char*)&entry, sizeof(entry));
		f.close();
		f1.close();
		MessageBox::Show("Success", "Record Added", MessageBoxButtons::OK);
		this->switchtomenu = true;
		this->Close();
		return;
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtomenu = true;
		this->Close();
	}
};
}

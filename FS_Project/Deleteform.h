#pragma once
#include "record.h";
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include <filesystem>

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
	/// Summary for Deleteform
	/// </summary>
	public ref class Deleteform : public System::Windows::Forms::Form
	{
	public:
		Deleteform(void)
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
		~Deleteform()
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
	private: System::Windows::Forms::Button^ btnsbt;
	private: System::Windows::Forms::Button^ btncnl;



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
			this->btnsbt = (gcnew System::Windows::Forms::Button());
			this->btncnl = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Delete Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(157, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the date (dd-mm-yyyy)";
			// 
			// datebox
			// 
			this->datebox->Location = System::Drawing::Point(162, 154);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(255, 26);
			this->datebox->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(220, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter the time";
			// 
			// timebox
			// 
			this->timebox->Location = System::Drawing::Point(162, 232);
			this->timebox->Name = L"timebox";
			this->timebox->Size = System::Drawing::Size(255, 26);
			this->timebox->TabIndex = 4;
			// 
			// btnsbt
			// 
			this->btnsbt->Location = System::Drawing::Point(162, 341);
			this->btnsbt->Name = L"btnsbt";
			this->btnsbt->Size = System::Drawing::Size(103, 39);
			this->btnsbt->TabIndex = 5;
			this->btnsbt->Text = L"SUBMIT";
			this->btnsbt->UseVisualStyleBackColor = true;
			this->btnsbt->Click += gcnew System::EventHandler(this, &Deleteform::btnsbt_Click);
			// 
			// btncnl
			// 
			this->btncnl->Location = System::Drawing::Point(319, 341);
			this->btncnl->Name = L"btncnl";
			this->btncnl->Size = System::Drawing::Size(98, 39);
			this->btncnl->TabIndex = 6;
			this->btncnl->Text = L"CANCEL";
			this->btncnl->UseVisualStyleBackColor = true;
			this->btncnl->Click += gcnew System::EventHandler(this, &Deleteform::btncnl_Click);
			// 
			// Deleteform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 490);
			this->Controls->Add(this->btncnl);
			this->Controls->Add(this->btnsbt);
			this->Controls->Add(this->timebox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->datebox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Deleteform";
			this->Text = L"Deleteform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public: bool switchtomenu = false;
	private: System::Void btnsbt_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream f,fi;
		record customer;
		char filename[10];
		int c = 0, flag = 0;
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

		fi.open("temp", ios::in | ios::out | ios::binary | ios::app | ios::ate);

		if (!fi)
		{
			MessageBox::Show("Error", "System error", MessageBoxButtons::OK);
			return;
		}

		String^ t = this->timebox->Text;
		string str1 = (const char*)(Marshal::StringToHGlobalAnsi(t)).ToPointer();

		while (f.read((char*)&customer, sizeof(customer)))
		{
			if (strcmp(customer.time, str1.c_str()) != 0)
				fi.write((char*)&customer, sizeof(customer));
			else {
				flag = 1;
				continue;
			}
		}
		f.close();
		fi.close();
		remove(filename);
		rename("temp", filename);
		f.open(filename, ios::in | ios::binary);
		f.seekg(0, ios::end);
		if (f.tellg() == 0) {
			f.close();
			remove(filename);
		}

		if (flag == 1) {
			MessageBox::Show("Record deleted successfully", "Success", MessageBoxButtons::OK);
			return;
		}
		else {
			MessageBox::Show("Record not found", "Failure", MessageBoxButtons::OK);
			return;
		}
		this->switchtomenu = true;
		this->Close();
	}
	private: System::Void btncnl_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtomenu = true;
		this->Close();
	}
};
}

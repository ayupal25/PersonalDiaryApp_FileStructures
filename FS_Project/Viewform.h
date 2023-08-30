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
	/// Summary for Viewform
	/// </summary>
	public ref class Viewform : public System::Windows::Forms::Form
	{
	public:
		Viewform(void)
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
		~Viewform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ipbox;

	private: System::Windows::Forms::Button^ btnsub;

	private: System::Windows::Forms::Button^ btncls;
	private: System::Windows::Forms::ListBox^ opbox;

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
			this->ipbox = (gcnew System::Windows::Forms::TextBox());
			this->btnsub = (gcnew System::Windows::Forms::Button());
			this->btncls = (gcnew System::Windows::Forms::Button());
			this->opbox = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(276, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"View Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(669, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the date of the record to be view (dd-mm-yyyy)";
			// 
			// ipbox
			// 
			this->ipbox->Location = System::Drawing::Point(257, 204);
			this->ipbox->Name = L"ipbox";
			this->ipbox->Size = System::Drawing::Size(220, 26);
			this->ipbox->TabIndex = 2;
			// 
			// btnsub
			// 
			this->btnsub->Location = System::Drawing::Point(257, 284);
			this->btnsub->Name = L"btnsub";
			this->btnsub->Size = System::Drawing::Size(87, 35);
			this->btnsub->TabIndex = 3;
			this->btnsub->Text = L"Submit";
			this->btnsub->UseVisualStyleBackColor = true;
			this->btnsub->Click += gcnew System::EventHandler(this, &Viewform::btnsub_Click);
			// 
			// btncls
			// 
			this->btncls->Location = System::Drawing::Point(390, 284);
			this->btncls->Name = L"btncls";
			this->btncls->Size = System::Drawing::Size(87, 35);
			this->btncls->TabIndex = 4;
			this->btncls->Text = L"Close";
			this->btncls->UseVisualStyleBackColor = true;
			this->btncls->Click += gcnew System::EventHandler(this, &Viewform::btncls_Click);
			// 
			// opbox
			// 
			this->opbox->FormattingEnabled = true;
			this->opbox->ItemHeight = 20;
			this->opbox->Location = System::Drawing::Point(58, 354);
			this->opbox->Name = L"opbox";
			this->opbox->Size = System::Drawing::Size(640, 244);
			this->opbox->TabIndex = 5;
			// 
			// Viewform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 656);
			this->Controls->Add(this->opbox);
			this->Controls->Add(this->btncls);
			this->Controls->Add(this->btnsub);
			this->Controls->Add(this->ipbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Viewform";
			this->Text = L"Viewform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public: bool switchtomenu = false;
	private: System::Void btncls_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtomenu = true;
		this->Close();
	}
	private: System::Void btnsub_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream f1;
		record customer;
		int c = 0;
		char filename[15];
		String^ date = this->ipbox->Text;
		string d = (const char*)(Marshal::StringToHGlobalAnsi(date)).ToPointer();
		strcpy(filename, d.c_str());
		f1.open(filename, ios::in | ios::binary);
		if (!f1)
		{
			MessageBox::Show("System error", "Record not found", MessageBoxButtons::OK);
			return;
		}
		while (f1.read((char*)&customer, sizeof(record)))
		{
			c++;
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
		}
	}
};
}

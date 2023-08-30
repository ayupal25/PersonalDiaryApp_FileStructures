#pragma once

namespace FSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainform
	/// </summary>
	public ref class Mainform : public System::Windows::Forms::Form
	{
	public:
		Mainform(void)
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
		~Mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ btnview;
	private: System::Windows::Forms::Button^ btnmod;
	private: System::Windows::Forms::Button^ btndel;

	private: System::Windows::Forms::Button^ btnadd;
	private: System::Windows::Forms::Button^ btncls;






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
			this->btnview = (gcnew System::Windows::Forms::Button());
			this->btnmod = (gcnew System::Windows::Forms::Button());
			this->btndel = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->btncls = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(194, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Personal Diary";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Niagara Engraved", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(239, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Main Menu";
			// 
			// btnview
			// 
			this->btnview->Location = System::Drawing::Point(226, 277);
			this->btnview->Name = L"btnview";
			this->btnview->Size = System::Drawing::Size(175, 40);
			this->btnview->TabIndex = 3;
			this->btnview->Text = L"VIEW RECORD";
			this->btnview->UseVisualStyleBackColor = true;
			this->btnview->Click += gcnew System::EventHandler(this, &Mainform::btnview_Click);
			// 
			// btnmod
			// 
			this->btnmod->Location = System::Drawing::Point(226, 334);
			this->btnmod->Name = L"btnmod";
			this->btnmod->Size = System::Drawing::Size(175, 40);
			this->btnmod->TabIndex = 4;
			this->btnmod->Text = L"MODIFY RECORD";
			this->btnmod->UseVisualStyleBackColor = true;
			this->btnmod->Click += gcnew System::EventHandler(this, &Mainform::btnmod_Click);
			// 
			// btndel
			// 
			this->btndel->Location = System::Drawing::Point(226, 393);
			this->btndel->Name = L"btndel";
			this->btndel->Size = System::Drawing::Size(175, 40);
			this->btndel->TabIndex = 5;
			this->btndel->Text = L"DELETE RECORD";
			this->btndel->UseVisualStyleBackColor = true;
			this->btndel->Click += gcnew System::EventHandler(this, &Mainform::btndel_Click);
			// 
			// btnadd
			// 
			this->btnadd->Location = System::Drawing::Point(226, 216);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(175, 40);
			this->btnadd->TabIndex = 7;
			this->btnadd->Text = L"ADD RECORD";
			this->btnadd->UseVisualStyleBackColor = true;
			this->btnadd->Click += gcnew System::EventHandler(this, &Mainform::btnadd_Click);
			// 
			// btncls
			// 
			this->btncls->Location = System::Drawing::Point(249, 477);
			this->btncls->Name = L"btncls";
			this->btncls->Size = System::Drawing::Size(134, 41);
			this->btncls->TabIndex = 8;
			this->btncls->Text = L"CLOSE";
			this->btncls->UseVisualStyleBackColor = true;
			this->btncls->Click += gcnew System::EventHandler(this, &Mainform::btncls_Click);
			// 
			// Mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 630);
			this->Controls->Add(this->btncls);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btndel);
			this->Controls->Add(this->btnmod);
			this->Controls->Add(this->btnview);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Mainform";
			this->Text = L"Mainform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchtoview = false;
	private: System::Void btnview_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtoview = true;
		this->Close();
	}
	public: bool switchtoadd = false;
	private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtoadd = true;
		this->Close();
	}
	public: bool switchtomod = false;
	private: System::Void btnmod_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtomod = true;
		this->Close();
	}
	public: bool switchtodel = false;
	private: System::Void btndel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchtodel = true;
		this->Close();
	}
	public: bool closepgm = false;
	private: System::Void btncls_Click(System::Object^ sender, System::EventArgs^ e) {
		this->closepgm = true;
		this->Close();
	}
};
}

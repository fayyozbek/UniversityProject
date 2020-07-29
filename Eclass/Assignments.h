#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Accounts.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace Eclass {

	/// <summary>
	/// Summary for Assignments
	/// </summary>
	public ref class Assignments : public System::Windows::Forms::UserControl
	{
	public:
		Assignments(void)
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
		~Assignments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lstAssignments;






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
			this->lstAssignments = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(40, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Assignments";
			// 
			// lstAssignments
			// 
			this->lstAssignments->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstAssignments->FormattingEnabled = true;
			this->lstAssignments->ItemHeight = 15;
			this->lstAssignments->Location = System::Drawing::Point(62, 113);
			this->lstAssignments->Name = L"lstAssignments";
			this->lstAssignments->Size = System::Drawing::Size(480, 229);
			this->lstAssignments->TabIndex = 5;
			// 
			// Assignments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lstAssignments);
			this->Controls->Add(this->label1);
			this->Name = L"Assignments";
			this->Size = System::Drawing::Size(600, 404);
			this->Load += gcnew System::EventHandler(this, &Assignments::Assignments_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Assignments_Load(System::Object^ sender, System::EventArgs^ e) {
		
		ifstream file;
		file.open(acc.getName() + "_assignments.txt");
		string str = "";
		int i = 0, j = 0;
		string strArr[2];
		do {
			getline(file, str, '|');
			if (j < 2) {
				strArr[j] = str;
				j++;
			}
			else {
				
				this->lstAssignments->Items->Add((gcnew System::String(strArr[0].c_str()))+"             "+ (gcnew System::String(strArr[1].c_str())));
				

				j = 0;
				strArr[j] = str;
				j++;
				i++;
			}
		} while (!file.eof());
		file.close();
		

	}
};
}

#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include"Accounts.h"
#include"Course.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Eclass {

	/// <summary>
	/// Summary for Grades
	/// </summary>
	public ref class Grades : public System::Windows::Forms::UserControl
	{
	public:
		Grades(void)
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
		~Grades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbGrades;
	private: System::Windows::Forms::Label^ lblQuiz;
	private: System::Windows::Forms::Label^ lblAssignment;
	private: System::Windows::Forms::Label^ lblAttendence;
	private: System::Windows::Forms::Label^ lblSubject;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblExams;



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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblQuiz = (gcnew System::Windows::Forms::Label());
			this->lblAssignment = (gcnew System::Windows::Forms::Label());
			this->lblAttendence = (gcnew System::Windows::Forms::Label());
			this->lblSubject = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblExams = (gcnew System::Windows::Forms::Label());
			this->cbGrades = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(40, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Grades";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->lblQuiz, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblAssignment, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblAttendence, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblSubject, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->lblExams, 4, 1);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::Olive;
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 78);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(562, 280);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// lblQuiz
			// 
			this->lblQuiz->AutoSize = true;
			this->lblQuiz->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblQuiz->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuiz->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblQuiz->Location = System::Drawing::Point(338, 140);
			this->lblQuiz->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblQuiz->Name = L"lblQuiz";
			this->lblQuiz->Size = System::Drawing::Size(108, 140);
			this->lblQuiz->TabIndex = 8;
			this->lblQuiz->Text = L" ";
			// 
			// lblAssignment
			// 
			this->lblAssignment->AutoSize = true;
			this->lblAssignment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblAssignment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAssignment->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblAssignment->Location = System::Drawing::Point(226, 140);
			this->lblAssignment->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAssignment->Name = L"lblAssignment";
			this->lblAssignment->Size = System::Drawing::Size(108, 140);
			this->lblAssignment->TabIndex = 7;
			this->lblAssignment->Text = L" ";
			// 
			// lblAttendence
			// 
			this->lblAttendence->AutoSize = true;
			this->lblAttendence->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblAttendence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAttendence->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblAttendence->Location = System::Drawing::Point(114, 140);
			this->lblAttendence->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAttendence->Name = L"lblAttendence";
			this->lblAttendence->Size = System::Drawing::Size(108, 140);
			this->lblAttendence->TabIndex = 6;
			this->lblAttendence->Text = L" ";
			// 
			// lblSubject
			// 
			this->lblSubject->AutoSize = true;
			this->lblSubject->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblSubject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubject->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblSubject->Location = System::Drawing::Point(2, 140);
			this->lblSubject->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSubject->Name = L"lblSubject";
			this->lblSubject->Size = System::Drawing::Size(108, 140);
			this->lblSubject->TabIndex = 5;
			this->lblSubject->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label5->Location = System::Drawing::Point(338, 0);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 140);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Quiz";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label4->Location = System::Drawing::Point(226, 0);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 140);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Assignment";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label3->Location = System::Drawing::Point(114, 0);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 140);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Attendance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(2, 0);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 140);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Subject";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label6->Location = System::Drawing::Point(450, 0);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 140);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Exams";
			// 
			// lblExams
			// 
			this->lblExams->AutoSize = true;
			this->lblExams->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblExams->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExams->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblExams->Location = System::Drawing::Point(450, 140);
			this->lblExams->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblExams->Name = L"lblExams";
			this->lblExams->Size = System::Drawing::Size(110, 140);
			this->lblExams->TabIndex = 10;
			// 
			// cbGrades
			// 
			this->cbGrades->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbGrades->ForeColor = System::Drawing::SystemColors::WindowText;
			this->cbGrades->FormattingEnabled = true;
			this->cbGrades->Location = System::Drawing::Point(215, 19);
			this->cbGrades->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cbGrades->Name = L"cbGrades";
			this->cbGrades->Size = System::Drawing::Size(278, 23);
			this->cbGrades->TabIndex = 2;
			this->cbGrades->SelectedIndexChanged += gcnew System::EventHandler(this, &Grades::cbGrades_SelectedIndexChanged);
			// 
			// Grades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->cbGrades);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Name = L"Grades";
			this->Size = System::Drawing::Size(600, 404);
			this->Load += gcnew System::EventHandler(this, &Grades::Grades_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Grades_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < iNum; i++)
		{
			this->cbGrades->Items->Add(gcnew System::String(accCourse.getSubject(i).getName().c_str()));
		}
	}

private: System::Void cbGrades_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	string nameLink = accCourse.getSubject(cbGrades->SelectedIndex).getName();
	string line="";
	for (int h = 0; h < nameLink.size(); h++) {
		if ((int)nameLink[h]!= '\n') {
			line += (int)nameLink[h];
		}
	}
	lblSubject->Text = gcnew System::String(line.c_str());
	ifstream file;
	file.open(line+".txt");
	string str = "";
	int i = 0, j = 0;
	string strArr[5];
	do {
		getline(file, str, '|');
		if (j < 5) {
			strArr[j] = str;
			j++;
		}
		else {
			string lineStr="";
			for (int h = 0; h < strArr[0].size(); h++) {
				if ((int)strArr[0][h] != '\n') {
					lineStr += (int)strArr[0][h];
				}
			}
			if (acc.getName()==lineStr) {
				lblAttendence->Text = gcnew System::String(strArr[2].c_str());
				lblAssignment->Text = gcnew System::String(strArr[3].c_str());
				lblQuiz->Text = gcnew System::String(strArr[4].c_str());
				lblExams->Text= gcnew System::String(strArr[1].c_str());
			}

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

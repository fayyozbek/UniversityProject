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
using namespace System::IO;
using namespace System::Drawing;


namespace Eclass {

	/// <summary>
	/// Summary for Courses
	/// </summary>
	public ref class Courses : public System::Windows::Forms::UserControl
	{
	public:
		Courses(void)
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
		~Courses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbCourses;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lnlTime;
	private: System::Windows::Forms::Label^ lblProffessor;

	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblSubject;

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
			this->cbCourses = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lnlTime = (gcnew System::Windows::Forms::Label());
			this->lblProffessor = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblSubject = (gcnew System::Windows::Forms::Label());
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
			this->label1->Size = System::Drawing::Size(79, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Courses";
			// 
			// cbCourses
			// 
			this->cbCourses->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCourses->FormattingEnabled = true;
			this->cbCourses->Location = System::Drawing::Point(40, 80);
			this->cbCourses->Name = L"cbCourses";
			this->cbCourses->Size = System::Drawing::Size(270, 22);
			this->cbCourses->TabIndex = 1;
			this->cbCourses->SelectedIndexChanged += gcnew System::EventHandler(this, &Courses::cbCourses_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Choose:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->lnlTime, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblProffessor, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblId, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label7, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->lblSubject, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(40, 112);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(502, 245);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// lnlTime
			// 
			this->lnlTime->AutoSize = true;
			this->lnlTime->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lnlTime->Location = System::Drawing::Point(377, 49);
			this->lnlTime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lnlTime->Name = L"lnlTime";
			this->lnlTime->Size = System::Drawing::Size(123, 196);
			this->lnlTime->TabIndex = 8;
			this->lnlTime->Text = L" ";
			// 
			// lblProffessor
			// 
			this->lblProffessor->AutoSize = true;
			this->lblProffessor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblProffessor->Location = System::Drawing::Point(252, 49);
			this->lblProffessor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblProffessor->Name = L"lblProffessor";
			this->lblProffessor->Size = System::Drawing::Size(121, 196);
			this->lblProffessor->TabIndex = 7;
			this->lblProffessor->Text = L" ";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblId->Location = System::Drawing::Point(127, 49);
			this->lblId->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(121, 196);
			this->lblId->TabIndex = 6;
			this->lblId->Text = L" ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(377, 0);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 49);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 0);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 49);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Subject";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(127, 0);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 49);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Course ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(252, 0);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 49);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Professor";
			// 
			// lblSubject
			// 
			this->lblSubject->AutoSize = true;
			this->lblSubject->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblSubject->Location = System::Drawing::Point(2, 49);
			this->lblSubject->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSubject->Name = L"lblSubject";
			this->lblSubject->Size = System::Drawing::Size(121, 196);
			this->lblSubject->TabIndex = 4;
			this->lblSubject->Text = L" ";
			// 
			// Courses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbCourses);
			this->Controls->Add(this->label1);
			this->Name = L"Courses";
			this->Size = System::Drawing::Size(600, 404);
			this->Load += gcnew System::EventHandler(this, &Courses::Courses_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	   Course *course;

private: System::Void Courses_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ name = gcnew System::String(acc.getName().c_str());
	System::IO::StreamReader^ sr = gcnew StreamReader(name+"_information.txt");
	String^ line;
	int num = 0;
	while ((line = sr->ReadLine()) != nullptr) {
		num++;
	}
	sr->Close();
	iNum = num;
	delete line;
	course = new Course();
	ifstream file;
	file.open(acc.getName() +"_information.txt");
	string str = "";
	int i = 0, j = 0;
	string strArr[4];
	do {
		getline(file, str, '|');
		if (j < 4) {
			strArr[j] = str;
			j++;
		}
		else {
			course->setSubjectsName(strArr[0], i);
			course->setSubjectsId(strArr[1], i);

			course->setProffessorsName(strArr[2], i);
			course->setSubjectsTime(strArr[3], i);

			j = 0;
			strArr[j] = str;
			j++;
			i++;
		}
	} while (!file.eof());
	file.close();
	accCourse = *course;
	for (int i = 0; i < num; i++)
	{
		this->cbCourses->Items->Add(gcnew System::String(course->getSubject(i).getName().c_str()));
	}

}
private: System::Void cbCourses_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	lblSubject->Text = gcnew System::String(course->getSubject(cbCourses->SelectedIndex).getName().c_str());
	lblId->Text = (gcnew System::String(course->getSubject(cbCourses->SelectedIndex).getId().c_str()));
	lblProffessor->Text = (gcnew System::String(course->getProffessorsName(cbCourses->SelectedIndex).c_str()));
	//lblInfo->Text = (gcnew System::String(selectedNews.getInfo().c_str()));
	string  day= course->getSubject(cbCourses->SelectedIndex).getTime();
	if ((int)day[0] == 'M') {
		lnlTime->Text = "Monady";
	} 
	else if ((int)day[0] == 'T') {
		lnlTime->Text = "Tuesday";

	}
	else if ((int)day[0] == 'W') {
		lnlTime->Text = "Wensday";

	}

	else if ((int)day[0] == 'H') {
		lnlTime->Text = "Thuraday";

	}

	else if ((int)day[0] == 'F') {
		lnlTime->Text = "Friday";

	}
}

};
}

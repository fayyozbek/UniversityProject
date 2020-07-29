#pragma once


#include"Courses.h"
#include "General.h"
#include"Assignments.h"
#include"Exams.h"
#include"Grades.h"
namespace Eclass {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::Form
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblCourses;
	private: System::Windows::Forms::Label^ lblAssignments;


	private: System::Windows::Forms::Label^ lblAnnonucements;
	private: System::Windows::Forms::Label^ lblGrades;
	private: System::Windows::Forms::Label^ lblExams;





	private: System::Windows::Forms::Label^ lblLogOut;

	private: System::Windows::Forms::Label^ lblExit;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	public: System::Windows::Forms::UserControl^ usc;
	private:

	public:




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblCourses = (gcnew System::Windows::Forms::Label());
			this->lblAssignments = (gcnew System::Windows::Forms::Label());
			this->lblAnnonucements = (gcnew System::Windows::Forms::Label());
			this->lblGrades = (gcnew System::Windows::Forms::Label());
			this->lblExams = (gcnew System::Windows::Forms::Label());
			this->lblLogOut = (gcnew System::Windows::Forms::Label());
			this->lblExit = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->usc = (gcnew System::Windows::Forms::UserControl());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(734, 466);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->lblCourses, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->lblAssignments, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->lblAnnonucements, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->lblGrades, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->lblExams, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->lblLogOut, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->lblExit, 0, 7);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 8;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.73034F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.35955F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.35955F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.35955F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.35955F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.35955F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.23596F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.23596F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(140, 460);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu";
			// 
			// lblCourses
			// 
			this->lblCourses->AutoSize = true;
			this->lblCourses->BackColor = System::Drawing::SystemColors::HighlightText;
			this->lblCourses->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCourses->Location = System::Drawing::Point(3, 72);
			this->lblCourses->Name = L"lblCourses";
			this->lblCourses->Size = System::Drawing::Size(53, 15);
			this->lblCourses->TabIndex = 1;
			this->lblCourses->Text = L"Courses";
			this->lblCourses->Click += gcnew System::EventHandler(this, &MyUserControl::lblCourses_Click);
			// 
			// lblAssignments
			// 
			this->lblAssignments->AutoSize = true;
			this->lblAssignments->BackColor = System::Drawing::SystemColors::HighlightText;
			this->lblAssignments->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAssignments->Location = System::Drawing::Point(3, 128);
			this->lblAssignments->Name = L"lblAssignments";
			this->lblAssignments->Size = System::Drawing::Size(79, 15);
			this->lblAssignments->TabIndex = 2;
			this->lblAssignments->Text = L"Assignments";
			this->lblAssignments->Click += gcnew System::EventHandler(this, &MyUserControl::lblAssignments_Click);
			// 
			// lblAnnonucements
			// 
			this->lblAnnonucements->AutoSize = true;
			this->lblAnnonucements->BackColor = System::Drawing::SystemColors::HighlightText;
			this->lblAnnonucements->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnnonucements->Location = System::Drawing::Point(3, 184);
			this->lblAnnonucements->Name = L"lblAnnonucements";
			this->lblAnnonucements->Size = System::Drawing::Size(95, 15);
			this->lblAnnonucements->TabIndex = 3;
			this->lblAnnonucements->Text = L"Annonucements";
			this->lblAnnonucements->Click += gcnew System::EventHandler(this, &MyUserControl::lblAnnonucements_Click);
			// 
			// lblGrades
			// 
			this->lblGrades->AutoSize = true;
			this->lblGrades->BackColor = System::Drawing::SystemColors::HighlightText;
			this->lblGrades->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGrades->Location = System::Drawing::Point(3, 240);
			this->lblGrades->Name = L"lblGrades";
			this->lblGrades->Size = System::Drawing::Size(46, 15);
			this->lblGrades->TabIndex = 4;
			this->lblGrades->Text = L"Grades";
			this->lblGrades->Click += gcnew System::EventHandler(this, &MyUserControl::lblGrades_Click);
			// 
			// lblExams
			// 
			this->lblExams->AutoSize = true;
			this->lblExams->BackColor = System::Drawing::SystemColors::HighlightText;
			this->lblExams->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExams->Location = System::Drawing::Point(3, 296);
			this->lblExams->Name = L"lblExams";
			this->lblExams->Size = System::Drawing::Size(42, 15);
			this->lblExams->TabIndex = 5;
			this->lblExams->Text = L"Exams";
			this->lblExams->Click += gcnew System::EventHandler(this, &MyUserControl::lblExams_Click);
			// 
			// lblLogOut
			// 
			this->lblLogOut->AutoSize = true;
			this->lblLogOut->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lblLogOut->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogOut->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblLogOut->Location = System::Drawing::Point(3, 352);
			this->lblLogOut->Name = L"lblLogOut";
			this->lblLogOut->Size = System::Drawing::Size(60, 19);
			this->lblLogOut->TabIndex = 7;
			this->lblLogOut->Text = L"Log out";
			this->lblLogOut->Click += gcnew System::EventHandler(this, &MyUserControl::lblLogOut_Click);
			// 
			// lblExit
			// 
			this->lblExit->AutoSize = true;
			this->lblExit->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lblExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblExit->Location = System::Drawing::Point(3, 403);
			this->lblExit->Name = L"lblExit";
			this->lblExit->Size = System::Drawing::Size(36, 19);
			this->lblExit->TabIndex = 8;
			this->lblExit->Text = L"Exit";
			this->lblExit->Click += gcnew System::EventHandler(this, &MyUserControl::lblExit_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->usc, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(148, 2);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(584, 462);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// usc
			// 
			this->usc->BackColor = System::Drawing::SystemColors::HighlightText;
			this->usc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->usc->Location = System::Drawing::Point(2, 2);
			this->usc->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->usc->Name = L"usc";
			this->usc->Size = System::Drawing::Size(580, 458);
			this->usc->TabIndex = 2;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 466);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyUserControl";
			this->Text = L"MyUserControl";
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
		

	private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
		General^ general = gcnew General();
		general->Parent = this;
		
		usc->Controls->Clear();
		usc->Controls->Add(general);
	}
private: System::Void lblExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   
private: System::Void lblLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	
	this->Hide();
}
private: System::Void lblCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	Courses^ courses = gcnew Courses();
	usc->Controls->Clear();
	usc->Controls->Add(courses);
	 
}
private: System::Void lblAnnonucements_Click(System::Object^ sender, System::EventArgs^ e) {
	General^ general = gcnew General();

	usc->Controls->Clear();
	usc->Controls->Add(general);
}
private: System::Void lblAssignments_Click(System::Object^ sender, System::EventArgs^ e) {
	Assignments^ page = gcnew Assignments();
	usc->Controls->Clear();
	usc->Controls->Add(page);


}
private: System::Void lblGrades_Click(System::Object^ sender, System::EventArgs^ e) {
	Grades^ page = gcnew Grades();
	usc->Controls->Clear();
	usc->Controls->Add(page);

}
private: System::Void lblExams_Click(System::Object^ sender, System::EventArgs^ e) {
	Exams^ page = gcnew Exams();
	usc->Controls->Clear();
	usc->Controls->Add(page);

}


};
}

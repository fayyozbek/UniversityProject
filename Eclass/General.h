#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"News.h"

//#include//"FirstPage.h"


namespace Eclass {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// —водка дл€ General
	/// </summary>
	public ref class General : public System::Windows::Forms::UserControl
	{
	public:
		General(void)
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
		~General()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblFrom;
	private: System::Windows::Forms::Label^ lblInfo;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::ComboBox^ cbFrom;





	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cbFrom = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(40, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Announcements";
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lblTitle->Location = System::Drawing::Point(56, 73);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(37, 15);
			this->lblTitle->TabIndex = 7;
			this->lblTitle->Text = L"Title:";
			// 
			// lblFrom
			// 
			this->lblFrom->AutoSize = true;
			this->lblFrom->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lblFrom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFrom->Location = System::Drawing::Point(56, 40);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(58, 15);
			this->lblFrom->TabIndex = 8;
			this->lblFrom->Text = L"Professor";
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblInfo->Location = System::Drawing::Point(2, 0);
			this->lblInfo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(480, 229);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = L"label1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->lblInfo, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(59, 106);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(484, 229);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// cbFrom
			// 
			this->cbFrom->FormattingEnabled = true;
			this->cbFrom->Location = System::Drawing::Point(383, 38);
			this->cbFrom->Margin = System::Windows::Forms::Padding(2);
			this->cbFrom->Name = L"cbFrom";
			this->cbFrom->Size = System::Drawing::Size(145, 21);
			this->cbFrom->TabIndex = 11;
			this->cbFrom->SelectedIndexChanged += gcnew System::EventHandler(this, &General::cbFrom_SelectedIndexChanged);
			// 
			// General
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->cbFrom);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lblFrom);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"General";
			this->Size = System::Drawing::Size(600, 404);
			this->Load += gcnew System::EventHandler(this, &General::General_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		News* arrNews;
		
	
	private: System::Void General_Load(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamReader^ sr = gcnew StreamReader("announcements.txt");
		String^ line;
		int num = 0;
		while ((line = sr->ReadLine()) != nullptr) {
			num++;
		}
		sr->Close();
		delete line;
		arrNews = new News[num];
		;
		ifstream file;
		file.open("announcements.txt");
		string str = "";
		int i = 0, j = 0;
		string strArr[3];
		do {
			getline(file, str, '|');
			if (j < 3) {
				strArr[j] = str;
				j++;
			}
			else {
				arrNews[i].setFrom(strArr[0]);
				arrNews[i].setTitle(strArr[1]);

				arrNews[i].setInfo(strArr[2]);
				
				j = 0;
				strArr[j] = str;
				j++;
				i++;
			}
		} while (!file.eof());
		file.close();
		for (int i = 0; i < num; i++)
		{
			this->cbFrom->Items->Add(gcnew System::String(arrNews[i].getFrom().c_str()));
		}
	}

private: System::Void cbFrom_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedNews = arrNews[cbFrom->SelectedIndex];
	lblFrom->Text = gcnew System::String(selectedNews.getFrom().c_str());
	lblTitle->Text = (gcnew System::String(selectedNews.getTitle().c_str()));
	lblInfo->Text = (gcnew System::String(selectedNews.getInfo().c_str()));
}
};
}

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Eclass {

	/// <summary>
	/// Summary for Exams
	/// </summary>
	public ref class Exams : public System::Windows::Forms::UserControl
	{
	public:
		Exams(void)
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
		~Exams()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
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
			this->label1->Size = System::Drawing::Size(70, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Exams";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Current:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Earlier:";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"No current exams are available now" });
			this->listBox1->Location = System::Drawing::Point(40, 90);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(480, 79);
			this->listBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"Course:                Professor:                Date:                  Time:",
					L"MSC1052             Kirti Seth                  May,1                10:00am - 11"
					L":00am"
			});
			this->listBox2->Location = System::Drawing::Point(40, 240);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(480, 64);
			this->listBox2->TabIndex = 4;
			// 
			// Exams
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Exams";
			this->Size = System::Drawing::Size(600, 404);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

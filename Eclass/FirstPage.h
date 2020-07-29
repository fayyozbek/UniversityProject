#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Accounts.h"
#include"MyUserControl.h"
namespace Eclass {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;///////wwdwww
	//using namespace Runtime::InteropServices;
	////Testing
	/// <summary>
	
	/// Ñâîäêà äëÿ FirstPage
	/// </summary>
	public ref class FirstPage : public System::Windows::Forms::Form
	{
	public:
		FirstPage(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~FirstPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnLogin;



	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::TextBox^ txtName;


	protected:



	protected:

	protected:


	protected:










	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstPage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(49, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(476, 108);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel2->Controls->Add(this->btnLogin);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->txtPassword);
			this->panel2->Controls->Add(this->txtName);
			this->panel2->Location = System::Drawing::Point(49, 129);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(475, 245);
			this->panel2->TabIndex = 1;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::GrayText;
			this->btnLogin->Location = System::Drawing::Point(169, 165);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(187, 62);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &FirstPage::btnLogin_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(45, 100);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(36, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(199, 103);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(259, 22);
			this->txtPassword->TabIndex = 1;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(199, 32);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(259, 22);
			this->txtName->TabIndex = 0;
			// 
			// FirstPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 460);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FirstPage";
			this->Text = L"FirstPage";
			this->Load += gcnew System::EventHandler(this, &FirstPage::FirstPage_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	Accounts* mydata;
	int num;
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	//
	//System::IO::StreamWriter^ sw = gcnew StreamWriter("data.txt", true);
	//sw->WriteLine(txtName->Text + "|" +  txtPassword->Text+ "|");

	//sw->Close();
	//System::IO::StreamWriter^ sw2 = gcnew StreamWriter(txtName->Text + "_information.txt");
	//
	//sw2->Close();
	//
	System::IO::StreamReader^ sr = gcnew StreamReader("data.txt");
	String^ line;
	num = 0;
	while ((line = sr->ReadLine()) != nullptr) {
		num++;
	}
	sr->Close();
	delete line;
	mydata = new Accounts[num];
	ifstream file;
	file.open("data.txt");
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
			//mydata[i].setName(strArr[0]);
			mydata[i].setDate(strArr[0], strArr[1]);

			
			j = 0;
			strArr[j] = str;
			j++;
			i++;
		}
	} while (!file.eof());
	file.close();

	bool yu = false;
	for (int i = 0; i < num; i++) {
		String^ login = gcnew System::String(mydata[i].getName().c_str());
		String^ password = gcnew System::String(mydata[i].getPassword().c_str());
		if (txtName->Text->Equals(login) && txtPassword->Text->Equals(password))
		{
			yu = true;
			acc = mydata[i];
			label1->Text = "Success";
			MyUserControl^ s = gcnew MyUserControl();
			s->Owner = this;
			s->Show();
			this->Hide();
			
		}
	}
	if (!yu) {

		label1->Text = "Try again";
		yu = false;
	}
	}
private: System::Void FirstPage_Load(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void FirstPage_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
}
};
}

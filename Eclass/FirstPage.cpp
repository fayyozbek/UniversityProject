#include "FirstPage.h"
#include"Courses.h"
#include "General.h"

#include"Assignments.h"
#include"Exams.h"
#include"Grades.h"
#include"MyUserControl.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]




	void main(cli::array<String^> ^ args) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Eclass::FirstPage firstForm;




	Application::Run(% firstForm);

}
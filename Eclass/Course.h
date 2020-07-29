#pragma once
#include<iostream>
#include<string>
#include"Subjects.h"
namespace Eclass {
	using namespace std;
	class Course
	{
	private:
		Subjects subjects[10];
		string proffessorsName[10];
	public:
		void setSubjectsName(string n, int i) {
			subjects[i].setName(n);
		}
		void setSubjectsTime(string t, int i) {
			subjects[i].setTime(t);
		}
		void setSubjectsId(string t, int i) {
			subjects[i].setId(t);
		}
		void setProffessorsName(string p, int i) {
			proffessorsName[i] = p;
		}
		Subjects getSubject(int i) {
			return subjects[i];
		}
		string getProffessorsName(int i) {
			return proffessorsName[i];
		}

	};
	static Course accCourse;
}

#pragma once
#include<iostream>
#include<string>
namespace Eclass {
	using namespace std;

	class Accounts
	{
	private:
		string name, password;
	public:
		Accounts()
		{
			

		}
		Accounts(string n, string p)
		{
		}
		void setName(string name) {
			this->name = name;
		}
		void setPassword(string password) {
			this->password = password;
		}
		string getName() {
			return name;
		}
		string getPassword() {
			return password;
		}
		void setDate(string n, string p) {

			setName(n);
			setPassword(p);
		}

	};
	static Accounts acc;
	static int iNum;
}

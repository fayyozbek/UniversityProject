#include<iostream>
#include<string>
namespace Eclass {
	using namespace std;
	class Subjects 
	{
	private:
		string name, time, id;
	public:
		void setName(string name) {
			this->name = name;
		}
		void setTime(string t) {
			this->time = t;

		}
		void setId(string i) {
			this->id = i;
		}
		string getId() {
			return id;
		}
		string getName() {
			return name;
		}
		string getTime() {
			return time;
		}

	};
}


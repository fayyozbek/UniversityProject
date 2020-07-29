#pragma once
#include<iostream>
#include<string>
namespace Eclass {
	using namespace std;
	class News
	{
	private: 
		string from, title, info;
	public:
		void setFrom(string from) {
			this->from = from;
		}
		void setTitle(string title) {
			this->title = title;
		}
		void setInfo(string info) {
			this->info = info;
		}
		string getFrom() {
			return from;
		}
		string getTitle () {
			return title;
		}
		string getInfo() {
			return info;
		}
	};
	static News selectedNews;

}

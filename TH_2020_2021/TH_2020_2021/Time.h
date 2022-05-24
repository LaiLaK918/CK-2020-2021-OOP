#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace ATM {

	class Time
	{
		string Day, Month, Year;
	public:
		Time();
		Time(const Time& time);
		~Time();
		friend ostream& operator << (ostream& os, const Time& time);
		friend istream& operator >> (istream& is, Time& time);

	};

}
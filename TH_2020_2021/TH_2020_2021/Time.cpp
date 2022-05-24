#include "Time.h"

namespace ATM {
	Time::Time()
	{
		Day = Month = Year = "";
	}

	Time::Time(const Time& time)
	{
		Day = time.Day;
		Month = time.Month;
		Year = time.Year;
	}

	Time::~Time()
	{

	}


	ostream& operator<<(ostream& os, const Time& time)
	{
		os << time.Day << "/" << time.Month << "/" << time.Year;
		return os;
	}

	istream& operator>>(istream& is, Time& time)
	{
		cout << "DD//YY//MM: ";
		is >> time.Day >> time.Month >> time.Year;
		return is;
	}


}
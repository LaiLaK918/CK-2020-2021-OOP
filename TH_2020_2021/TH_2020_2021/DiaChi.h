#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace ATM {


	class DiaChi
	{
		string Tinh;
		string Huyen;
		string Xa;
		string Duong;
	public:
		DiaChi();
		DiaChi(const DiaChi& diaChi);
		~DiaChi();
		friend ostream& operator << (ostream& os, const DiaChi& diaChi);
		friend istream& operator >> (istream& is, DiaChi& diaChi);

	};

}


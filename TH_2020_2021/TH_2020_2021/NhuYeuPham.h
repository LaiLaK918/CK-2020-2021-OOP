#pragma once

#include <string>
#include <iostream>
using namespace std;

#include "Time.h"

namespace ATM {

	typedef unsigned int uint;
	class NhuYeuPham
	{
	protected:
		string Loai;
		Time NSX, HSD;
		uint SoLuong;
	public:
		NhuYeuPham();
		NhuYeuPham(const NhuYeuPham& nyp);
		~NhuYeuPham();
		virtual long TinhPhiDuyTri() = 0;
		friend ostream& operator << (ostream& os, const NhuYeuPham& nyp);
		friend istream& operator >> (istream& is, NhuYeuPham& nyp);
	};

}
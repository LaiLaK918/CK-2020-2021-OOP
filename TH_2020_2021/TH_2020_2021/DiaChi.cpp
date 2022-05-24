#include "DiaChi.h"

namespace ATM {
	DiaChi::DiaChi()
	{
		Tinh = Huyen = Xa = Duong = "";
	}

	DiaChi::DiaChi(const DiaChi& diaChi)
	{
		Tinh = diaChi.Tinh;
		Huyen = diaChi.Huyen;
		Xa = diaChi.Xa;
		Duong = diaChi.Duong;
	}

	DiaChi::~DiaChi()
	{

	}

	ostream& operator<<(ostream& os, const DiaChi& diaChi)
	{
		os << diaChi.Duong << ", " << diaChi.Xa << ", " << diaChi.Huyen << ", " << diaChi.Tinh;
		return os;
	}

	istream& operator>>(istream& is, DiaChi& diaChi)
	{
		cout << "Tinh, thanh pho: ";
		getline(is, diaChi.Tinh);
		cout << "Huyen, quan: ";
		getline(is, diaChi.Huyen);
		cout << "Xa, phuong, thi tran: ";
		getline(is, diaChi.Xa);
		cout << "Duong-So nha: ";
		getline(is, diaChi.Duong);
		return is;
	}


}
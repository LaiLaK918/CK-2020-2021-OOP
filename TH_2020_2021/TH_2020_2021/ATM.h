#pragma once
#include "DiaChi.h"
#include "NhuYeuPhamLib.h"


namespace ATM {

	typedef unsigned int uint;
	class ATM
	{
	protected:
		DiaChi DiaChiATM;
		uint SoNhanKhauKhoKhan;
		uint SoNhanVien;
		uint SoLuongNYM[3];
		uint SLMoiLoaiATM[3];
		uint CongSuat;
	public:
		ATM();
		ATM(const ATM& atm);
		~ATM();
		virtual long TinhChiPhi() = 0;
		friend ostream& operator << (ostream& os, const ATM& atm);
		friend istream& operator >> (istream& is, ATM& atm);
	};

}


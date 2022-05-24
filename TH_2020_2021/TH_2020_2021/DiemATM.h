#pragma once
#include "ATM.h"
#include "ATMGao.h"
#include "ATMMiGoi.h"
#include "ATMSua.h"
#include <vector>

namespace ATM {


	class DiemATM
	{
		vector<ATM*> DATM;
	public:
		DiemATM();
		DiemATM(const DiemATM& datm);
		~DiemATM();
		friend ostream& operator << (ostream& os, const DiemATM& atm);
		friend istream& operator >> (istream& is, DiemATM& atm);

	};

}
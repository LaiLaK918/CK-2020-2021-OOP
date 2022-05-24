#pragma once
#include "ATM.h"

namespace ATM {


    class ATMMiGoi :
        public ATM
    {
        MiGoi SoMiGoi;
    public:
        ATMMiGoi();
        ATMMiGoi(const ATMMiGoi& atm);
        ~ATMMiGoi();
        long TinhChiPhi();
        friend ostream& operator << (ostream& os, const ATMMiGoi& atm);
        friend istream& operator >> (istream& is, ATMMiGoi& atm);

    };

}
#pragma once
#include "ATM.h"

namespace ATM {


    class ATMSua :
        public ATM
    {
        Sua SoSua;
    public:
        ATMSua();
        ATMSua(const ATMSua& atm);
        ~ATMSua();
        long TinhChiPhi();
        friend ostream& operator << (ostream& os, const ATMSua& atm);
        friend istream& operator >> (istream& is, ATMSua& atm);

    };

}
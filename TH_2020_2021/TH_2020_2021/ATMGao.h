#pragma once
#include "ATM.h"

namespace ATM {


    class ATMGao :
        public ATM
    {
        Gao SoGao;
    public:
        ATMGao();
        ATMGao(const ATMGao& atm);
        ~ATMGao();
        long TinhChiPhi();
        friend ostream& operator << (ostream& os, const ATMGao& atm);
        friend istream& operator >> (istream& is, ATMGao& atm);
    };

}
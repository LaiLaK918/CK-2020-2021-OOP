#pragma once
#include "NhuYeuPham.h"

namespace ATM {


    class Gao :
        public NhuYeuPham
    {
    public:
        Gao();
        Gao(const Gao& gao);
        ~Gao();
        long TinhPhiDuyTri();
        friend ostream& operator << (ostream& os, const Gao& gao);
        friend istream& operator >> (istream& is, Gao& gao);
    };

}
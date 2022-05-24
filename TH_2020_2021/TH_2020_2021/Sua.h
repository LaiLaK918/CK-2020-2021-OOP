#pragma once
#include "NhuYeuPham.h"

namespace ATM {


    class Sua :
        public NhuYeuPham
    {
    public:
        Sua();
        Sua(const Sua& sua);
        ~Sua();
        long TinhPhiDuyTri();
        friend ostream& operator << (ostream& os, const Sua& sua);
        friend istream& operator >> (istream& is, Sua& sua);
    };

}
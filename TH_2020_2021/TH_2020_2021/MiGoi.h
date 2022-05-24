#pragma once
#include "NhuYeuPham.h"

namespace ATM {


    class MiGoi :
        public NhuYeuPham
    {
    public:
        MiGoi();
        MiGoi(const MiGoi& mi);
        ~MiGoi();
        long TinhPhiDuyTri();
        friend ostream& operator << (ostream& os, const MiGoi& mi);
        friend istream& operator >> (istream& is, MiGoi& mi);
    };

}
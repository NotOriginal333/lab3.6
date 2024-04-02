#pragma once
#include <iostream>
using namespace std;
#include "B.h"
class D1 :
    public B
{
    int d1;

public:
        D1(int x, int y)
        : B(y)
    {
        d1 = x;
    }

        ~D1() { };

        void show_D1();
};


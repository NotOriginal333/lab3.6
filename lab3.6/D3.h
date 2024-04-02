#pragma once
#include "D2.h"
#include <iostream>
using namespace std;
class D3 :
    public D2
{
    int d3;

public:
    D3(int x, int i, int j)
        : D2(i, j)
    {
        d3 = x;
    }

    ~D3() { };

    void show_D3();
};


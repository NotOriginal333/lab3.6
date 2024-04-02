#pragma once
#include "D3.h"
#include "D1.h"
#include <iostream>
using namespace std;
class D4 :
    private D3, protected D1
{
    int d4;

public:
    D4(int x, int y, int z, int i, int j, int k)
        : D1(y, z), D3(i, j, k)
    {
        d4 = x;
    }

    ~D4() { };

    void show_D4();
};


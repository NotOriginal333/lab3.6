#include "D4.h"

int main()
{
    B o0(777);
    cout << "B o0(777);" << endl;
    cout << "sizeof(B) = " << sizeof(B) << endl;
    cout << endl << "I. B: " << endl;
    o0.show_B();

    D1 o1(111, 222);
    cout << "D1 o1(111, 222);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "I. D1: " << endl;
    o1.show_D1();

    D2 o2(1000, 2000);
    cout << "D2 o2(1000, 2000);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "I. D2: " << endl;
    o2.show_D2();

    D3 o3(100, 200, 300);
    cout << "D3 o3(100, 200, 300);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "I. D3: " << endl;
    o3.show_D3();

    D4 o4(1, 2, 3, 4, 5, 6);
    cout << "D4 o4(1, 2, 3, 4, 5, 6);" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << endl << "I. D4: " << endl;
    o4.show_D4();
    
    return 0;
}
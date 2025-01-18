#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int* pA;

    pA = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "pA = " << pA << endl;
    cout << "*pA = " << *pA << endl;

    pA = &b;

    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    cout << "pA = " << pA << endl;
    cout << "*pA = " << *pA << endl;

    return 0;
}
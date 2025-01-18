#include <iostream>
using namespace std;

int main()
{
    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "pA = " << pA << endl;

    return 0;
}
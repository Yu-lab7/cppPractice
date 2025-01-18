#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int& rA = a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;

    rA = 10;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "rA = " << rA << endl;
    cout << "&rA = " << &rA << endl;
}
#include <iostream>
using namespace std;

void add(int& a , int& b, int& c)
{
    a += c;
    b += c;

    return;
}

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    add(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
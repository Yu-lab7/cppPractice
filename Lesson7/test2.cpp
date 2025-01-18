#include <iostream>
using namespace std;

template <class T>
T square(T x)
{
    return x * x;
}

int main()
{
    cout << "Enter a number: ";
    int x;
    cin >> x;
    cout << "The square of " << x << " is " << square(x) << endl;

    cout << "Enter a number: ";
    double y;
    cin >> y;
    cout << "The square of " << y << " is " << square(y) << endl;
    return 0;
}
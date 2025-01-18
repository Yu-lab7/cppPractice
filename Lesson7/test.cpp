#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

int main()
{
    cout << "Enter a number: ";
    int x;
    cin >> x;
    cout << "The square of " << x << " is " << square(x) << endl;
    return 0;
}
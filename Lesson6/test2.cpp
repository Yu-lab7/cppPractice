#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int input = 0;

    while (1)
    {
        cin >> input;
        if (input == 0)
        {
            break;
        }
        sum += input;
    }

    cout << sum << endl;
}
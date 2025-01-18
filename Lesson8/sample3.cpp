#include <iostream>
using namespace std;

inline void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    swap(&num1, &num2);

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
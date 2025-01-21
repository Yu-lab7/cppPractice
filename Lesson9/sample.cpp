#include <iostream>
using namespace std;

int main()
{
    int test[5] = {1, 2, 3, 4, 5};

    cout << "test[0] = " << test[0] << endl;
    cout << "&test[0] = " << &test[0] << endl;
    cout << "test = " << test << endl;
    cout << "*test = " << *test << endl;

    return 0;
}
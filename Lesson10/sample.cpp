#include <iostream>
using namespace std;

int main(){

    int* pA;

    pA = new int;

    *pA = 10;

    cout << "pA: " << *pA << endl;

    delete pA;

    return 0;


}
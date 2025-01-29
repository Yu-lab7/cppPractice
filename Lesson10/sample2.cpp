#include <iostream>
using namespace std;

int main(){
    int num;
    int* pA;

    cin >> num;

    pA = new int[num];

    for(int i = 0; i < num; i++){
        pA[i] = i;
    }

    for(int i = 0; i < num; i++){
        cout << "pA[" << i << "]: " << pA[i] << endl;
    }

    delete[] pA;

    return 0;
}
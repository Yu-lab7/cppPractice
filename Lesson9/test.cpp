#include <iostream>
#include <string>
using namespace std;

int max(int x[]){
    int max = x[0];
    for(int i = 1; i < 5; i++){
        if(x[i] > max){
            max = x[i];
        }
    }
    return max;
}

int main()
{
    cout << "Enter 5 numbers: ";
    int x[5];
    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }
    cout << "The maximum number is: " << max(x) << endl;

    return 0;
}
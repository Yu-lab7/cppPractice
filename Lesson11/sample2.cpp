#include <iostream>
using namespace std;

struct Car{
    int num;
    double gas;
};

int main(){
    Car car1;

    cin >> car1.num;
    cin >> car1.gas;

    cout << "Car number: " << car1.num << endl;
    cout << "Gas: " << car1.gas << endl;

    return 0;
}
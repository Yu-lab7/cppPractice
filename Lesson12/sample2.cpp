#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        void showCar();
        void setNumGas(int n, double g);
        void show();
};

void Car::show(){
    showCar();
}

void Car::showCar(){
    cout << "車のナンバーは" << num << "です。\n";
    cout << "ガソリン量は" << gas << "です。\n";
}

void Car::setNumGas(int n, double g){
    num = n;
    gas = g;
    cout << "車のナンバーを" << num << "に、ガソリン量を" << gas << "にしました。\n";
}


int main(){
    Car car1;
    car1.setNumGas(1234, 25.5);

    car1.show();

    return 0;
}
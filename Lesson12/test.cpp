#include <iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        void setX(int a);
        void setY(int b);
        int getX(){return x;};
        int getY(){return y;};
};

void Point::setX(int a){
    x = a;
}

void Point::setY(int b){
    y = b;
}

int main(){
    Point p1;
    
    int num;

    cout << "X座標を入力してください。\n";
    cin >> num;
    p1.setX(num);

    cout << "Y座標を入力してください。\n";
    cin >> num;
    p1.setY(num);

    cout << "X座標は" << p1.getX() << "です。\n";
    cout << "Y座標は" << p1.getY() << "です。\n";

    return 0;
}


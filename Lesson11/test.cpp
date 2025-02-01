#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

int main(){
    Person p1, p2;

    cin >> p1.age >> p1.weight >> p1.height;
    cin >> p2.age >> p2.weight >> p2.height;

    cout << "Person 1: " << p1.age << " " << p1.weight << " " << p1.height << endl;

    cout << "Person 2: " << p2.age << " " << p2.weight << " " << p2.height << endl;

    return 0;
}
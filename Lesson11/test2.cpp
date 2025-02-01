#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

void aging(Person *p);

int main(){
    Person p1;

    cin >> p1.age >> p1.weight >> p1.height;

    aging(&p1);

    cout << "Person 1: " << p1.age << " " << p1.weight << " " << p1.height << endl;

    return 0;
}

void aging(Person *p){
    p -> age++;
}
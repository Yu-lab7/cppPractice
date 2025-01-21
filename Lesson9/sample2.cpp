#include <iostream>
using namespace std;

double avg(int t[]);

int main()
{
    int test[5];

    cout << "Enter 5 test scores: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> test[i];
    }

    cout << "The average score is " << avg(test) << endl;
    
}

double avg(int t[])
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += t[i];
    }
    return sum / 5;
}
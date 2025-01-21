#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str0[20];
    char str1[20];
    char str2[20];


    strcpy(str1, "Hello");
    strcpy(str2, "World");
    strcpy(str0, str1);
    strcat(str0, str2);

    cout << str0 << endl;

    return 0;
}
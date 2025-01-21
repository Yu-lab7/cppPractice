#include <iostream>
using namespace std;

int length(char* str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}

int main()
{
    cout << "Enter a string: ";
    char str[100];
    cin >> str;

    cout << "The length of the string is: " << length(str) << endl;

    return 0;
}
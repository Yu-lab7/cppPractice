#include <iostream>
using namespace std;

int count(char str[], char ch){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Enter a string: ";
    char str[100];
    cin >> str;

    cout << "Enter a character: ";
    char ch;
    cin >> ch;

    cout << "The character " << ch << " appears " << count(str, ch) << " times in the string." << endl;

    return 0;
}
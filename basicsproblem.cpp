// 1.	WAP to check A character is a vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    cout << "enter a character";
    char ch;
    cin >> ch;
    if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 || ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 55)
    {
        cout << "vowel";
    }
        else
        cout << "consonent";

}
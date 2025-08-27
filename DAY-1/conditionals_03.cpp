#include<iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the character: ";
    cin >> a;

    if('a'<= a && a <= 'z')                  // Can't use 'a' <= a <= 'z' as it will be evaluated as ('a' <= a) <= 'z' which is wrong
    {
        cout << "Lowercase letter!" << endl;
    }
    else if('A'<= a && a <= 'Z')
    {
        cout << "Uppercase letter!" << endl;
    }
    else if('0' <= a && a <= '9')
    {
        cout << "It is a number!" << endl;
    } 
    else
    {
        cout << "Special character!" << endl;
    }
}
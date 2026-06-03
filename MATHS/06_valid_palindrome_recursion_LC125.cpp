#include<iostream>
#include <string>
#include <cctype>
using namespace std;

bool validPalindrome(string str, int left, int right) {

    if(left >= right) return true;

    if(!isalnum(str[left])) return validPalindrome(str, left + 1, right);

    if(!isalnum(str[right])) return validPalindrome(str, left, right - 1);

    if(tolower(str[left]) != tolower(str[right])) return false;

    return validPalindrome(str, left + 1, right - 1);

}

int main() {

    string str;
    cout << "Enter you string: ";
    getline(cin, str); // Cant use cin for a string as it stops taking input after a space.
    
    int left = 0, right = str.size() - 1;
    
    bool result = validPalindrome(str, left, right);
    if(result == 1) cout << "Your string is a valid Palindrome";
    else cout << "Your string is an invalid Palindrome";

    return 0;

}
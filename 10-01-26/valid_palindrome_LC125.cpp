#include<iostream>
#include <string>
#include <cctype>
using namespace std;

bool validPalindrome(string str) {

    int left = 0, right = str.size() - 1;

    while(left < right) {

        if(!isalnum(str[left])) {
            left++;
            continue;
        }
        if(!isalnum(str[right])) {
            right--;
            continue;
        }
        if(tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;

    }

    return true;

}

int main() {

    string str;
    cout << "Enter you string: ";
    getline(cin, str); // Cant use cin for a string as it stops taking input after a space.

    bool result = validPalindrome(str);
    if(result == 1) cout << "Your string is a valid Palindrome";
    else cout << "Your string is an invalid Palindrome";

    return 0;

}
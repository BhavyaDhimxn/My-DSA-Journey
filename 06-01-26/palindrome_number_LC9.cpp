#include<iostream>
using namespace std;

bool checkPalindrome(int x) {

    if(x < 0) return false;

    long long ans = 0;
    int var = x;

    while(var != 0) {

        int digit = var % 10;
        var = var / 10;
        ans = ans * 10 + digit;

    } 

    return ans == x;

}

int main() {

    int x;
    cout << "Enter a number: ";
    cin >> x;

    bool result = checkPalindrome(x);
    cout << "Your number is a palindrome number: " << result << endl;

    return 0;
    
}
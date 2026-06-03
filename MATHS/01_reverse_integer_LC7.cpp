#include<iostream>
using namespace std;

int reverseInteger(int x) {

    int ans = 0;

    while(x != 0) {

        int digit = x % 10;
        x = x / 10;

        if(ans > INT_MAX / 10 || (ans == INT_MAX && digit > 7))
        return 0;

        if(ans < INT_MIN / 10 || (ans == INT_MIN && digit < -8))
        return 0;

        ans = (ans * 10) + digit;

    }

    return ans;

}

int main() {

    int x;
    cout << "Enter a number: ";
    cin >> x;

    int result = reverseInteger(x);
    cout << "Reversed number is: " << result << endl;

}
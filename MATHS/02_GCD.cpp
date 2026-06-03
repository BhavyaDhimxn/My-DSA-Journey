#include<iostream>
using namespace std;

int GCD(int a, int b) {
    int ans;
    for(int i = min(a, b); i > 1; i--) {

        if(a % i == 0 && b % i == 0) {
            ans = i;
            break;
        }

    }
    return ans;
}

int main() {

    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int result = GCD(a, b);

    cout << "GCD of the two numbers is: " << result;

    return 0; 
}
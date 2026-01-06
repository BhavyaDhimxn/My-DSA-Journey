#include<iostream>
using namespace std;

bool checkArmstrong(int x) {

    int sum = 0;
    int var = x;

    while(var != 0) {

        int digit = var % 10;
        var = var / 10;
        sum = sum + (digit * digit * digit);

    }

    return sum == x;

}

int main() {

    int x;
    cout << "Enter a number: ";
    cin >> x;

    bool result = checkArmstrong(x);
    cout << "Your number is a armstrong number: " << result << endl;

    return 0;
    
}
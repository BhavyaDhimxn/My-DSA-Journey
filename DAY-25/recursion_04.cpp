#include<iostream>
using namespace std;

void printSum(int n, int sum) {

    if(n<1) {
        
        cout << sum;
        return;

    }

    printSum(n-1, sum+n);

}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printSum(n, 0);

    return 0;

}
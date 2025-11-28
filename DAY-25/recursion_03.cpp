#include<iostream>
using namespace std;

void printNumber(int i, int n) {

    if(i>n) {

        return;

    }

    cout << n << " ";
    printNumber(i, n-1);

}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printNumber(1, n);

    return 0;

}
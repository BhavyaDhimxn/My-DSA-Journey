#include<iostream>
using namespace std;

void printNumber(int i, int n) {

    if(i<1) {

        return;

    }

    printNumber(i-1, n);
    cout << i << " ";

}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printNumber(n, n);

    return 0;

}
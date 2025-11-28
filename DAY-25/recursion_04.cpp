#include<iostream>
using namespace std;

//PARAMETERISED RECURSION:

void printSum1(int n, int sum) {

    if(n<1) {
        
        cout << sum;
        return;

    }

    printSum1(n-1, sum+n);

}

//FUNCTIONAL RECURSION:

int printSum2(int n) {

    if(n == 0) {

        return 0;

    }

    return n + printSum2(n-1);

}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printSum1(n, 0);
    printSum2(n);

    return 0;

}
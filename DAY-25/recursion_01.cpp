#include<iostream>
using namespace std;

void printName(int n) {
    static int count = 0; // Make count static to retain its value across function calls

    if(count == n) {
        return;
    }

    cout << "Bhavya Dhiman" << endl;
    count++;
    printName(n);

}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printName(n);

    return 0;
}


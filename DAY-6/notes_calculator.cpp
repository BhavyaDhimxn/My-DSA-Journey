#include<iostream>
using namespace std;

int main(){
    int n, amtLeft;
    cout << "Denominations available: 100, 50, 20, 1" << endl;
    cout << "Enter the amount: ";
    cin >> n;
    
    switch(n / n){
        case 1:
            cout << "100 : " << n / 100 << endl;
            amtLeft = n % 100;
        
        case 2:
            cout << "50 : " << amtLeft / 50 << endl;
            amtLeft = amtLeft % 50;

        case 3:
            cout << "20 : " << amtLeft / 20 << endl;
            amtLeft = amtLeft % 20;

        case 4:
            cout << "1 : " << amtLeft / 1 << endl;
            amtLeft = amtLeft % 1;
            break;    
    }
}
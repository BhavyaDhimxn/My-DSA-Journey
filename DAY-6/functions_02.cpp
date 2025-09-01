#include<iostream>
using namespace std;

bool oddEven(){
    int num;
    cout << "Enter your number: ";
    cin >> num;

    if(num % 2 == 0){
        return true;
    } else {
        return false;
    } 
}

int main(){
    if(oddEven()){
        cout << "Even number" << endl;
    } else {
        cout << "Odd number" << endl;
    }
    return 0;
}
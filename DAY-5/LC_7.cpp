#include<iostream>
using namespace std;

int main(){
    int n, answer = 0;
    cout << "Enter you number: ";
    cin >> n;

    while(n != 0){
        int digit = n % 10;
        answer = (answer * 10) + digit;
        n = n / 10;
    }
    if((answer > INT_MAX/10) || (answer < INT_MIN/10)){
            cout << "0";
        }
    else{
    cout << "Reversed number is: " << answer << endl;
    }
}
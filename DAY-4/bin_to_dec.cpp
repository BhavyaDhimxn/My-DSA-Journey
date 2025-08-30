#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your binary number: ";
    cin >> n;

    int i = 0, answer = 0;
    while(n != 0){
        int digit = n % 10;
        if(digit == 1){
            answer = (pow(2, i) + answer);
        }
        n = n / 10;
        i++;
    }
    cout << "The decimal representation is: " << answer << endl;
}
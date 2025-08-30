#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int i = 0, answer = 0;

    while(n != 0){
        int bit = n & 1;
        answer = (bit * pow(10, i) + answer);
        n = n >> 1;
        i++;
    }

    cout << "The binary representation is: " << answer << endl;
}
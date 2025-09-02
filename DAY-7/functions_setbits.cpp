#include<iostream>
using namespace std;

int setBits(int n){
    int count = 0;
    
    while(n != 0){
        if (n & 1){
        count++;
    }
    n = n >> 1;
    } 
    return count;
}

int main(){
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int ans = setBits(a) + setBits(b);
    cout << "Total set bits: " << ans << endl;
}
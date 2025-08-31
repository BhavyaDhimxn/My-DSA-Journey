#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter you number: ";
    cin >> n;

    int m = n;
    int mask = 0;

    while(m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int answer = (~n) & mask;
    cout << "Complement number is: " << answer << endl;
}
#include<iostream>
using namespace std;

// int main(){
//     int n, value = (~n) + 1;
//     cout << "Enter your number: ";
//     cin >> n;

//     int i = 0, answer = 0;

//     while(value != 0){
//         int bit = value & 1;
//         answer = (bit * pow(10, i) + answer);
//         value = value >> 1;
//         i++;
//     }
//     cout << "The binary representation is: " << answer << endl;
// }

// int main()
// {
// int n;
// cin>>n;
// for(int i=7;i >=0;i--)
// {
// int bit=(n>>i)&1;
// cout<<bit;
// }
// return 0;
// }

int main() {
    int n;
    cin >> n;

    // Handle zero explicitly
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

    // Handle negative numbers using unsigned representation
    unsigned int value = (n < 0) ? -n : n;

    // Find the position of the most significant bit (MSB)
    int msb = 31;  // assuming 32-bit int
    while (((value >> msb) & 1) == 0) {
        msb--;
    }

    // Print bits from MSB to LSB
    for (int i = msb; i >= 0; i--) {
        int bit = (value >> i) & 1;
        cout << bit;
    }

    cout << endl;
    return 0;
}

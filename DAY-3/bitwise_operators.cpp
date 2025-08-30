#include<iostream>
using namespace std;

int main()
{
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    cout << "Bitwise AND (a & b): " << (a & b) << endl; // Output: 1 (Binary: 0001)
    cout << "Bitwise OR (a | b): " << (a | b) << endl;  // Output: 7 (Binary: 0111)
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl; // Output: 6 (Binary: 0110)
    cout << "Bitwise NOT (~a): " << (~a) << endl;       // Output: -6 (Binary: ...11111010)
    cout << "Left Shift (a << 1): " << (a << 1) << endl; // Output: 10 (Binary: 1010)
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl; // Output: 2 (Binary: 0010)
}
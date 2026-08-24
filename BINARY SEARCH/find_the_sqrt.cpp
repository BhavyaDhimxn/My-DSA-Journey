#include <iostream>
using namespace std;

/*
BRUTE FORCE APPROACH:

int findSqrt(int num) {
    int i = 1;
    while(i <= num) {
        if((num/i) < i) break;
        i++;
    }
    return i - 1;
}
*/

/*
OPTIMAL APPROACH:
*/
int findSqrt(int num) {
    int low = 1, high = num;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (mid <= num / mid) {
            low = mid + 1;  // Look for a larger match
        } else {
            high = mid - 1; // Look for a smaller match
        }
    }
    return high;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The integer square root of " << number << " is " << findSqrt(number) << endl;
    return 0;
}

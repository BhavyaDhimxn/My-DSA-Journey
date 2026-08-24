#include <iostream>
using namespace std;

/*
BRUTE FORCE APPROACH:
*/
int findSqrt(int num) {
    int i = 1;
    while(i <= num) {
        if((num/i) < i) break;
        i++;
    }
    return i - 1;
}
/*
int findSqrt(int num) {
    // Base cases for 0 and 1
    if (num == 0 || num == 1) return num;

    int low = 1, high = num, ans = 0;

    while (low <= high) {
        // Prevent potential integer overflow
        int mid = low + (high - low) / 2;

        // Use division to prevent mid * mid integer overflow
        if (mid <= num / mid) {
            ans = mid;      // Store the closest floor value found so far
            low = mid + 1;  // Look for a larger match
        } else {
            high = mid - 1; // Look for a smaller match
        }
    }
    return ans;
}
*/

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The integer square root of " << number << " is " << findSqrt(number) << endl;
    return 0;
}

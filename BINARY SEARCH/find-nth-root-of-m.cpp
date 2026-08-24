#include <iostream>
using namespace std;

/*
BRUTE FORCE APPROACH:
*/
int findSqrt(int m ,int n) {
    int i = 1;
    while(i <= m) {
        if(pow(i, n) == m) return i;
        i++;
    }
    return -1;
}


/*
OPTIMAL APPROACH:

int findSqrt(int m, int n) {
    int low = 1, high = num;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid <= num / mid) {
            low = mid + 1;  // Look for a larger match
        } else {
            high = mid - 1; // Look for a smaller match
        }
    }
    return high;
}
*/

int main() {
    int number;
    cout << "Enter m: ";
    cin >> number;

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "-th " << "root of " << number << " is " << findSqrt(number , n) << endl;
    return 0;
}
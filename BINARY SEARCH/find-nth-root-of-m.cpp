#include <iostream>
using namespace std;

/*
BRUTE FORCE APPROACH:

int findSqrt(int m ,int n) {
    int i = 1;
    while(i <= m) {
        if(pow(i, n) == m) return i;
        i++;
    }
    return -1;
}
*/


/*
OPTIMAL APPROACH:
*/
int findSqrt(int m, int n) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + high / 2;
        if ((long long)pow(mid, n) == m) return mid;
        if ((long long)pow(mid, n) < m) {
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }
    return -1;
}


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
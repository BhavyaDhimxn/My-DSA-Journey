#include<iostream>
using namespace std;

long long int squareRoot(int num) {

    int start = 0, end = num;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;

    while(start <= end) {
        
        long long int square = mid*mid;

        if(square == num) {
            return mid;
        }

        else if(square > num) {
            end = mid - 1;
        }

        else {
            ans = mid;
            start = mid + 1;
        }
        
        mid = start + (end - start) / 2;

    }

    return ans;

}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square root of " << num << " is: " << squareRoot(num) << endl;

    return 0;
}
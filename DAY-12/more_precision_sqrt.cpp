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

double morePrecision(int num, int precision, int tempSol) {

    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < precision; i++) {
        factor = factor / 10;

        for(double j = ans; j*j < num; j = j + factor) {
            ans = j;
        }
    }
    
    return ans;

}    

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int precision;
    cout << "Enter the precision: ";
    cin >> precision;

    int tempSol = squareRoot(num);
    cout << "Square root of " << num << " is: " << morePrecision(num, precision, tempSol) << endl;

    return 0;
}
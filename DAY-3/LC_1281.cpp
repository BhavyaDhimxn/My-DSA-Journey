#include<iostream>
using namespace std;

int main()
{
    int n, product = 1, sum = 0;
    cout << "Enter your number: ";
    cin >> n;

    while(n != 0)
    {
        int digit = n%10;
        product *= digit;
        sum += digit;
        n = n/10;
    }
    int answer = product - sum;
    cout << "The answer is: " << answer << endl;
}
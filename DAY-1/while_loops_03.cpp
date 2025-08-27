#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int sum = 0, i = 2;

    while(i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << "Sum of first " << n << " even numbers is: " << sum << endl;
}
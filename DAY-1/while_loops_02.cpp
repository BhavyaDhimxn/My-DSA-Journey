#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int sum = 0, i = 1;

    while(i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }

    cout << "Sum of first " << n << " numbers is: " << sum << endl;
}
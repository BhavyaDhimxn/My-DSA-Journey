#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    int f1 = 0, f2 = 1, nextTerm;
    cout << "Fibonacci Series: " << endl;
    cout << f1 << endl;
    cout << f2 << endl;

    for(int i = 1; i <= n; i++)
    {
        nextTerm = f1 + f2;
        f1 = f2;
        f2 = nextTerm;
        cout << nextTerm << endl;
    }
}
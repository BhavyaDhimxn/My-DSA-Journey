#include<iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    while(i<=n)
    {
        char ch = 'A' + i - 1;
        int j = 1;
        while(j<=i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;

        i++;
    }
}
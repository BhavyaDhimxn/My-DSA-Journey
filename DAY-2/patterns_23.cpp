#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    while(i<=n)
    {
        int space = n - i;
        while(space)
        {
            cout << "  ";
            space--;
        }

        int j = 1;
        while(j<=i)
        {
            cout << j << " ";
            j++;
        }

        int k = 1;
        while(k<=(i-1))
        {
            cout << i - k << " ";
            k++;
        }

        cout << endl;
        i++;
    }
}
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=(n - i + 1))
        {
            cout << j << " ";
            j++;
        }

        int k = 1;
        while(k<=((i-1)*2))
        {
            cout << "* ";
            k++;
        }

        int m = 1;
        while(m<=(n - i + 1))
        {
            cout << n - m - i + 2<< " ";
            m++;
        }

        cout << endl;
        i++;
    }
}
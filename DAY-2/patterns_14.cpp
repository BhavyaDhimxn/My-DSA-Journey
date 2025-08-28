#include<iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    char ch = 'A' + i - 1;
    cout << "Enter the value of n: ";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;

        i++;
    }
}
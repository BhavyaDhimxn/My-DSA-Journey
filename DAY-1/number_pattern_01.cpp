#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter the dimension: ";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << i << " ";
            j = j +1;
        }
        cout << endl;
        i = i + 1;
    }
}
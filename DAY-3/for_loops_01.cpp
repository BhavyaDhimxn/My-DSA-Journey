#include<iostream>
using namespace std;

/*BREAK METHOD*/
int main()
{
    int n, i = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    for( ; ; )
    {
        if(i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
}

/*NORMAL METHOD*/
// for( int i = 1; i <= n ; i++)
// {
//     cout << i << endl;
// }

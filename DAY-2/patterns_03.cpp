/*MY METHOD*/
#include<iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    while(i<n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << j + n*i << " ";
            j++;
        }
        cout << endl;

        i++;
    }
}

/*BABBAR METHOD*/
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, i = 1, count = 1;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout << count << " ";
//             count = count + 1;
//             j++;
//         }
//         cout << endl;

//         i++;
//     }
// }
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of A: ";
    cin >> a;

    if (a>0)
    {
        cout << "A is positive!" << endl;
    }
    else if (a<0)
    {
        cout << "A is negative!" << endl;
    }
    else
    {
        cout << "A is zero!" << endl;
    }

    /*HOMEWORK QUESTIONS*/

    //QUESTION 1:
    // int a = 9;
    // if(a==9)
    // {
    //     cout << "1" << endl;
    // }
    // if(a>0)
    // {
    //     cout << "2" << endl;
    // }
    // else
    // {
    //     cout << "3" << endl;
    // }

    //OUTPUT: 1 2

    //QUESTION 2:
    // int a = 2;
    // int b = a + 1;
    // if((a=3)==b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << a+2 << endl;
    // }

    //OUTPUT: 3

    //QUESTION 3:
    // int a = 24;
    // if(a>20)
    // {
    //     cout << "1" << endl;
    // }
    // else if(a==24)
    // {
    //     cout << "2" << endl;
    // }
    // else
    // {
    //     cout << "3" << endl;
    // }

    //OUTPUT: 1
}
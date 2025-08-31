#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter you number: ";
    cin >> n;

    char ch = 'a';
    switch (n)
    {
    case 1:
        switch(ch){
            case 'a':
                cout << "You entered one and a" << endl;
                break;
            case 'b':
                cout << "You entered one and b" << endl;
                break;
            default:
                cout << "You entered one and something else" << endl;
                break;
        }
        cout << "You entered one" << endl;
        break;
    
    case 2:
        cout << "You entered two" << endl;
        break;

    case 3:
        cout << "You entered three" << endl;
        break;

    case 4:
        cout << "You entered four" << endl;
        break;

    case 5:
        cout << "You entered five" << endl;
        break;

    default:
        cout << "Number not in the range of 1 to 5" << endl;
        break;
    }
}
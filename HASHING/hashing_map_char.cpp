#include<iostream>
#include<map>
using namespace std;

int main() {
    string s;
    cout << "Enter your string: ";
    cin >> s;

    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++) {
        mpp[s[i] - 'a'] += 1;
    }

    int a;
    cout << "How many letters do you want to check? ";
    cin >> a;

    while(a--) {
        char ch;
        cout << "Enter your letter: ";
        cin >> ch;
        cout << "Your letter appears " << mpp[ch - 'a'] << " time(s)." << endl;
    }

    return 0;

}
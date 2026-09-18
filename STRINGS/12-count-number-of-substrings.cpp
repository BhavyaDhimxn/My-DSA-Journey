#include<iostream>
#include<string>
using namespace std;

/*
BRUTE FORCE APPROACH:

int maxSubstrings(string s) {
    int n = s.length();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            ans++;
        }
    }
    return ans;
}
*/

/*
OPTIMAL APPROACH:
*/
int maxSubstrings(string s) {
    int n = s.length();
    return (n*(n + 1))/2;
}

int main() {
    string s;
    cout << "Enter your string: ";
    cin >> s;

    int result = maxSubstrings(s);
    cout << "The number of substrings in your string is: " << result << endl;

    return 0; 
}
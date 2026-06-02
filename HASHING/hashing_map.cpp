#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    int arr[n];
    cout << "Populate the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]] += 1;
    }

    int a;
    cout << "How many numbers do you want to check? ";
    cin >> a;

    while(a--) {
        int num;
        cout << "Enter your number: ";
        cin >> num;
        cout << "Your number appears " << mpp[num] << " times(s)." << endl;
    }

    return 0;

}
#include<iostream>
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

    int hash[100] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int a;
    cout << "How many numbers do you want to check? ";
    cin >> a;

    while(a--) {
        int num;
        cout << "Enter your number: ";
        cin >> num;
        cout << "Your number appears " << hash[num] << " times." << endl;
    }

    return 0;

}
#include<iostream>
#include<map>
using namespace std;


int maxFrequency(int arr[], int n) {

    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]] += 1;
    }

    int maximum = 0;
    for(auto it:mpp) {
        maximum = max(maximum, it.second);
    }

    return maximum;
}
int main() {
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    int arr[n];
    cout << "Populate the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq = maxFrequency(arr, n);
    cout << "The frequency of most frequent element is: " << freq << endl;

    return 0;

}
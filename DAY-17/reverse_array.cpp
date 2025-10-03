#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void reverseArray(vector<int> &v) {
    
    int start = 0, end = v.size() - 1;

    while(start < end) {
       
        swap(v[start], v[end]);
        start++;
        end--;

    }

}

void printArray(vector<int> v) {

    for(int i = 0; i < v.size(); i++) {

        cout << v[i] << " ";

    }

    cout << endl;

}

int main() {

    vector<int> v;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;
        v.push_back(x);

    }

    cout << "Original array: ";
    printArray(v);

    reverseArray(v);
    cout << "Reversed array: ";
    printArray(v);

    return 0;
    
}

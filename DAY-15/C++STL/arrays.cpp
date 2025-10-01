#include<iostream>
#include<array>
using namespace std;

int main() {

    array<int, 5> arr = {1, 2, 3, 4, 5};
    
    cout << "The array is: ";
    
    for(int i = 0; i < arr.size(); i++) {

        cout << arr[i] << " ";

    }

    cout << endl;
    cout << "Element at index 2: " << arr.at(2) << endl;
    cout << "Is the Array empty? " << arr.empty() << endl;
    cout << "The first element: " << arr.front() << endl;
    cout << "The last element: " << arr.back() << endl;
}
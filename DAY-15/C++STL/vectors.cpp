#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(20);
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(30);
    cout << "Capacity: " << vec.capacity() << endl;

    // Displaying elements of the vector
    cout << "Elements in the vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Removing the last element
    vec.pop_back();

    // Displaying elements after removal
    cout << "Elements after pop_back: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    vec.clear();
    cout << "Capacity after clearing: " << vec.capacity() << endl;

    return 0;
}
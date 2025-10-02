#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // Ordered set
    set<int> orderedSet;
    orderedSet.insert(5);
    orderedSet.insert(1);
    orderedSet.insert(3);
    
    cout << "Ordered Set (sorted): ";
    for (const auto& elem : orderedSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Unordered set
    unordered_set<int> unorderedSet;
    unorderedSet.insert(5);
    unorderedSet.insert(1);
    unorderedSet.insert(3);
    
    cout << "Unordered Set (random order): ";
    for (const auto& elem : unorderedSet) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
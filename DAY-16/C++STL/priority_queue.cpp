#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Max Heap
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(30);

    cout << "Max Heap elements in order of removal:\n";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Retrieve the greatest element
        maxHeap.pop();
    }
    cout << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(30);

    cout << "Min Heap elements in order of removal:\n";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // Retrieve the smallest element
        minHeap.pop();
    }
    cout << endl;

    return 0;
}
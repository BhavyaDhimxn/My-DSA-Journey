#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements:\n";
    while (!s.empty()) {
        cout << s.top() << endl; // Print the top element
        s.pop(); // Remove the top element
    }

    return 0;
}
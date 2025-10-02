#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> deq;

    deq.push_back(2);
    deq.push_front(1);
    
    for(int i:deq) {
       cout << i << endl;
    }

    deq.push_back(3);
    deq.push_front(0);
    
    cout << "After adding elements:" << endl;
    for(int i:deq) {
       cout << i << endl;
    }

    deq.pop_back();
    deq.pop_front();
    
    cout << "After removing elements:" << endl;
    for(int i:deq) {
       cout << i << endl;
    }
}

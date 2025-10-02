#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> lst;

    lst.push_back(2);
    lst.push_front(1);

    for(int i : lst) {
       cout << i << endl;
    }

    lst.push_back(3);
    lst.push_front(0);

    cout << "After adding elements:" << endl;
    for(int i : lst) {
       cout << i << endl;
    }

    lst.pop_back();
    lst.pop_front();

    cout << "After removing elements:" << endl;
    for(int i : lst) {
       cout << i << endl;
    }
}

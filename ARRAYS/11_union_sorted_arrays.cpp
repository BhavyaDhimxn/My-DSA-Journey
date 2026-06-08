#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> unionArrays(vector<int> &num1, vector<int> &num2, int n1, int n2) {

    set<int> st;

    for(int i = 0; i < n1; i++) {

        st.insert(num1[i]);

    }

    for(int i = 0; i < n2; i++) {

        st.insert(num2[i]);

    }

    vector<int> union_array;

    for(auto it : st) {

        union_array.push_back(it);

    }

    return union_array;

}

int main() {

    int n1, n2;

    cout << "Enter the size of first array: ";
    cin >> n1;
    vector<int> num1(n1);
    cout << "Enter the elements of first array: ";
    for(int i = 0;i < n1; i++) {

        cin >> num1[i];

    }

    cout << "Enter the size of second array: ";
    cin >> n2;
    vector<int> num2(n2);
    cout << "Enter the elements of second array: ";
    for(int i = 0;i < n2; i++) {

        cin >> num2[i];

    }

    cout << "The union array is: ";
    
    vector<int> nums = unionArrays(num1, num2, n1, n2);
    for(int x : nums) {
    cout << x << " ";
    }
    return 0;
}
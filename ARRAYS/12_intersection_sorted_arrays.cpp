#include<iostream>
#include<vector>
#include<set>
using namespace std;

/*
BRUTE FORCE APPROACH:

vector<int> intersectionArrays(vector<int> &num1, vector<int> &num2, int n1, int n2) {
    
    vector<int> temp;
    vector<int> vis(n2, 0);

    for(int i = 0; i < n1; i++) {

        for(int j = 0; j < n2; j++) {

            if(num1[i] == num2[j]) {

                temp.push_back(num1[i]);
                vis[j] = 1;
                break;
            }

            if(num2[j] > num1[i]) break;

        }
    }
    return temp;

}
*/

/*
OPTIMAL APPROACH:
*/
vector<int> intersectionArrays(vector<int> &num1, vector<int> &num2, int n1, int n2) {

    vector<int> temp;
    int i = 0, j = 0;

    while(i < n1 && j < n2) {

        if(num1[i] == num2[j]) {
            
            temp.push_back(num1[i]);
            i++;
            j++;

        }
        if(num1[i] > num2[j]){
            j++;
        }
        if(num2[j] > num1[i]) {
            i++;
        }
    } 

    return temp;
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
    
    vector<int> nums = intersectionArrays(num1, num2, n1, n2);
    for(int x : nums) {
    cout << x << " ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums, int n) {

    vector<int> answer(n, 0);
    int posIndex = 0, negIndex = 1;

    for(int i = 0; i < n; i++) {

        if(nums[i] > 0) {

            answer[posIndex] = nums[i];
            posIndex += 2;

        }
        else {

            answer[negIndex] = nums[i];
            negIndex += 2;

        }

    }

    return answer;
}

void printArray(vector<int> &nums, int n) {

    for(int i = 0; i < n; i++) {

        cout << nums[i] << " ";

    }

    cout << endl;

}

int main() {
 
    int n;
    cout << "Enter the number of elements (even): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of your array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = rearrangeArray(nums, n);
    cout << "The final array is: " << endl;
    printArray(result, n);

    return 0;
}
#include<iostream> 
#include<vector>
using namespace std;

void rearrangeArray(vector<int> &nums, int n) {

    vector<int> pos, neg;
    
    for(int i = 0; i < n; i++) {

        if(nums[i] > 0) {

            pos.push_back(nums[i]);

        }
        else {

            neg.push_back(nums[i]);

        }

    }

    if(pos.size() > neg.size()) {

        for(int i = 0; i < neg.size(); i++) {

            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];

        }

        int Index = pos.size()*2;
        
        for(int i = neg.size(); i < pos.size(); i++) {

            nums[Index] = pos[i];
            Index++;

        }
    }
    else {

        for(int i = 0; i < pos.size(); i++) {

            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];

        }

        int Index = neg.size()*2;
        
        for(int i = pos.size(); i < neg.size(); i++) {

            nums[Index] = neg[i];
            Index++;
        } 
    }
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
    
    rearrangeArray(nums, n);
    cout << "The final array is: ";
    printArray(nums, n);

    return 0;
}
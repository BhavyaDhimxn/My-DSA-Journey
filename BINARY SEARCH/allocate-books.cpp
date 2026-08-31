#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

int studentCounter(vector<int> &nums, int pages) {
    int n = nums.size();
    int studentCount = 1, pagesForStudent = 0;

    for(int i = 0; i < n; i++) {
        if(pagesForStudent + nums[i] <= pages) pagesForStudent += nums[i];
        else {
            studentCount++;
            pagesForStudent = nums[i];
        }
    }
    return studentCount;
}

int allocateBooks(vector<int> &nums, int students, int n) {
    long long maxi = accumulate(nums.begin(), nums.end(), 0);

    if(students > n) return -1;
    for (int i = *max_element(nums.begin(), nums.end()); i <= maxi; i++) {
        if(studentCounter(nums, i) == students) return i;
    }
    return -1;  
}

int main() {
    int n, students;
    
    cout << "Enter the number of books: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the pages of each book: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the number of students: ";
    cin >> students;
    
    int result = allocateBooks(nums, students, n);
    
    if (result == -1) {
        cout << "Allocation not possible." << endl;
    } else {
        cout << "The minimum possible maximum pages allocated to a student is: " << result << endl;
    }
    
    return 0;
}

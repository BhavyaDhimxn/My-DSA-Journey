#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int students, int mid) {

    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < size; i++) {

        if(pageSum + arr[i] <= mid) {

            pageSum += arr[i];

        } else {

            studentCount++;
            if(studentCount > students || arr[i] > mid) {

                return false;

            }
            pageSum = arr[i];

        }

    }

    return true;

}

int allocateBooks(int arr[], int size, int students) {

    int start = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < size; i++) {

        sum += arr[i];

    }
    int end = sum;
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(isPossible(arr, size, students, mid)) {

            ans = mid;
            end = mid - 1;

        } else {

            start = mid + 1;

        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int main() {

    int arr[100], size, students;
    cout << "Enter the number of books: ";
    cin >> size;

    cout << "Enter the number of students: ";
    cin >> students;
    
    cout << "Enter the number of pages in each book: ";
    for(int i = 0; i < size; i++) {

        cin >> arr[i];

    }
   
    cout << "The minimum number of pages allocated to a student is: " << allocateBooks(arr, size, students) << endl;
}
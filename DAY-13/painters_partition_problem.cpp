#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int painters, int mid) {
    int painterCount = 1;
    int boardTime = 0;
    for(int i = 0; i < size; i++) {

        if(boardTime + arr[i] <= mid) {

            boardTime += arr[i];

        }
        else {
            painterCount++;

            if(painterCount > painters || arr[i] > mid) {

                return false;

            }

            boardTime = arr[i];

        }

    }

    return true;

}

int allocatePainters(int arr[], int size, int painters) {

    int start = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < size; i++) {

        sum += arr[i];

    }
    int end = sum;
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(isPossible(arr, size, painters, mid)) {

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

    int arr[100], size, painters;

    cout << "Enter the number of boards: ";
    cin >> size;

    cout << "Enter the time needed for each board: ";
    for(int i = 0; i < size; i++) {

        cin >> arr[i];

    }

    cout << "Enter the number of painters: ";
    cin >> painters;

    cout << "The minimum time to paint all boards is: " << allocatePainters(arr, size, painters) << endl;
}
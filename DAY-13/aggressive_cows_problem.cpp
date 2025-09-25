#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int size, int cows, int mid) {
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i = 1; i < size; i++) {

        if(arr[i] - lastPos >= mid) {
            
            cowCount++;

            if(cowCount == cows) {
                return true;
            }

            lastPos = arr[i];

        }

    }

    return false;

}

int aggressiveCows(int arr[], int size, int cows) {

    

    int start = 0;
    int ans = -1;
    int end = arr[size-1] - arr[0];
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(isPossible(arr, size, cows, mid)) {

            ans = mid;
            start = mid + 1;

        } else {

            end = mid - 1;

        }

        mid = start + (end - start) / 2;
    }

    return ans;

}

int main() {

    int arr[100], size, cows;

    cout << "Enter the number of stalls: ";
    cin >> size;

    cout << "Enter the position of each stall: ";
    for(int i = 0; i < size; i++) {

        cin >> arr[i];

    }

    sort(arr, arr + size);

    cout << "Enter the number of cows: ";
    cin >> cows;

    cout << "The minimum distance between cows is: " << aggressiveCows(arr, size, cows) << endl;
}

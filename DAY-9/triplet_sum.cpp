#include<iostream>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s){

    vector<vector<int>> answer;

    for(int i = 0; i < arr.size(); i++){

        for(int j = i + 1; j < arr.size(); j++){

            for(int k = j + 1; k < arr.size(); k++){

                if(arr[i] + arr[j] + arr[k] == s){

                    vector<int> temp;

                    temp.push_back(min(arr[i], min(arr[j], arr[k])));
                    temp.push_back(arr[i] + arr[j] + arr[k] - max(arr[i], max(arr[j], arr[k])) - min(arr[i], min(arr[j], arr[k])));
                    temp.push_back(max(arr[i], max(arr[j], arr[k])));
                    answer.push_back(temp);

                }

            }

        }

    }

    sort(answer.begin(), answer.end());

    return answer;

}

int main(){
    int n, s;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr;
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }

    cout<< "Enter the target sum: ";
    cin >> s;

    vector<vector<int>> result(tripletSum(arr, s));
    cout << "The triplets with the given sum are: " << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
    }
    return 0;
}
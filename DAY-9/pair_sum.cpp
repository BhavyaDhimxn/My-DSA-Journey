#include<iostream>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> answer;   

    for(int i = 0; i < arr.size(); i++){

        for(int j = i + 1; j < arr.size(); j++){
            
            if(arr[i] + arr[j] == s){
                
                vector<int> temp;

                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                answer.push_back(temp);

            }

        }

    }
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

    vector<vector<int>> result(pairSum(arr, s));
    cout << "The pairs with the given sum are: " << endl;
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i][0] << " " << result[i][1] << endl;
    }
    
    return 0;  
}
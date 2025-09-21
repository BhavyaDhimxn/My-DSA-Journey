#include<iostream>
using namespace std;

vector<int> arrayIntersection(int arr1[], int arr2[], int size1, int size2){

    vector<int> intersection;
    
    int i = 0, j = 0;
    
    while(i < size1 && j < size2){
        
        if(arr1[i] < arr2[j]){
            i++;
        }
        
        else if(arr1[i] == arr2[j]){
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
        
        else if(arr1[i] > arr2[j]){
            j++;
        }
    }

    return intersection;
}

int main(){
    int arr1[100], arr2[100], size1, size2;
    
    cout << "Enter the size of first array: ";
    cin >> size1;
    
    cout << "Enter the elements of first array (sorted): ";
    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }
    
    cout << "Enter the size of second array: ";
    cin >> size2;
    
    cout << "Enter the elements of second array (sorted): ";
    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }
    
    vector<int> result = arrayIntersection(arr1, arr2, size1, size2);
    
    cout << "The intersection of the two arrays is: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
}
#include<iostream>
using namespace std;

int main(){
    int n; 
    bool its;
    cout << "Enter you number: ";
    cin >> n;

    for(int i = 0; i <= 30; i++){
        int answer = pow(2, i);

        if(answer == n){
            its = true;
        }
    }
    cout << its << endl;
}
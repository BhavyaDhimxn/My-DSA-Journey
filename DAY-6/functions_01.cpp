#include<iostream>
using namespace std;

int power(){
    int num1, num2;
    cout << "Enter your numbers: ";
    cin >> num1 >> num2;

    int ans = 1;
    for(int i = 0; i < num2; i++){
        ans = ans * num1;
    }

    return ans; 
}

int main(){
    int ans = power();
    cout << "Result is: " << ans << endl;

    ans = power();
    cout << "Result is: " << ans << endl;

    ans = power();
    cout << "Result is: " << ans << endl;

    return 0;
}
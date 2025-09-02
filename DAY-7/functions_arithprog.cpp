#include<iostream>
using namespace std;

int arithProg(int n){
    
    int ans = ((3 * n) + 7);

    return ans;
}

int main(){
    int n ;
    cout << "Enter the term number: ";
    cin >> n;
    int ans = arithProg(n);
    cout << "The nth term is: " << ans << endl;

    return 0;
}
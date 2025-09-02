#include<iostream>
using namespace std;

int fibonacci(int n){
    int n1 = 0, n2 = 1, nextTerm;
    if(n == 1){
        return n1;
    } else if(n == 2){
        return n2;
    } else {
        for(int i = 3; i <= n; i++){
            nextTerm = n1 + n2;
            n1 = n2;
            n2 = nextTerm;
        }
        return nextTerm;
    }
}

int main(){
    int n;
    cout << "Enter the term number: ";
    cin >> n;

    int ans = fibonacci(n);
    cout << "The " << n << "th term in the Fibonacci sequence is: " << ans << endl;

    return 0;
}
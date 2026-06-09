//Write function for Fibonacci

#include <iostream>
using namespace std;

long long int fibo(int x);

int main(){
    
    int n;

    cout << "Enter N: ";
    cin >> n;

    if (n > 92) {
    cout << "Result exceeds long long range";
    return 0;
    }
    
    if (n < 0) {
        cout << "Error: Negative input ";
        return 0;
    }

    cout << "Fibonacci Term = " << fibo(n);
    return 0;
}

long long int fibo(int x){

    long long int a=0, b=1, term;    
    if(x==0) return a;
    if(x==1) return b;

    for(int i=2; i<=x; i++){
        term = a+b;
        a=b;
        b=term;
    }
    return term;
}
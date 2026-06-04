//Program to Recursive fibonacci

#include <iostream>
using namespace std;

int fibo(int x){
    
    if (x==1)
       return 1;
    if (x==0)
       return 0;
    
    return fibo(x-1) + fibo(x-2);
}

int main(){

    int n;

    cout << "Enter N : ";
    cin >> n;

    cout << "Fibonacci term = " << fibo(n);
    return 0;

}
//Write function to find factorial

#include <iostream>
using namespace std;

int fact(int x){

    int factorial=1;

    if(x<0) 
        return -1;
    if(x==0)
        return 1;

    while (x>0){
        factorial *= x;
        x--;
    }    
    return factorial;
}

int main(){

    int a;

    cout << "Enter N: ";
    cin >> a;

    cout << "Factorial (" << a << "!) = ";
    
    fact(a)==-1? cout << "Not Defined"
               : cout << fact(a) ;
    return 0;
}

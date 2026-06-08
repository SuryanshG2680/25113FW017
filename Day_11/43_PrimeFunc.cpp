//Write function to check prime

#include <iostream>
using namespace std;

bool primenum(int a){

    if(a<2)
        return false;

    int i=2;
    while (i<=a/2){
        if(a%i== 0)
            return false;
        i++;
    }
    return true;
}

int main(){

    int x;

    cout << "Enter number to check: ";
    cin >> x ;

    primenum(x)? cout << "The number is prime" 
               : cout << "The number is NOT Prime";
    
    return 0;
}
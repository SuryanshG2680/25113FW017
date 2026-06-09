//Write function for armstrong

#include <iostream>
#include <cmath>
using namespace std;

bool arms(int n);

int main(){

    int a;

    cout << "Enter N: ";
    cin >> a;

    arms(a)? cout << "The given number is Armstrong"
            : cout << "The number is NOT Armstrong";

    return 0;
}

bool arms(int n){

    int digit=0, c, arm=0;

    for(int x=n; x>0; x/=10){
        digit++;
    }

    if(n==0) digit=1;
 
    for(int x=n; x>0; x/=10){
        c= x%10;
        arm= arm + pow(c, digit);
    }

    return n==arm;
}
//Write function for palindrome

#include <iostream>
using namespace std;

bool palin(int x);

int main(){

    int a;

    cout << "Enter N: ";
    cin >> a;

    palin(a)? cout << "The number is palindrome"
            : cout << "The number is NOT palindrome";

    return 0;
}

bool palin(int x){
    
    int y=x;

    int rev=0;

    while (x>0){
        rev = rev*10 + x%10;
        x /= 10;
    }  
    
    return rev==y;
}
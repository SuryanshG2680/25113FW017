//Program to Recursive reverse number

#include <iostream>
using namespace std;

int reverse(int x, int rev){

    if (x==0)
        return rev;
    
    rev= rev*10 + x%10;
    return reverse(x/10, rev);
}

int main (){

    int n;

    cout << "Enter number= ";
    cin >> n;

    cout << "Reverse = " << reverse(n, 0);

    return 0;
}
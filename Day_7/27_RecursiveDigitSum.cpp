//Program to Recursive sum of digits

#include <iostream>
using namespace std;

int digit (int x){

    if(x==0){
        return 0;
    }

    return x%10 + digit(x/10);
}

int main (){

    int n;

    cout << "Enter number= ";
    cin >> n;

    cout << "Sum of digits = " << digit(n);

    return 0;
}
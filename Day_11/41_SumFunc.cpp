//Write function to find sum of two numbers

#include <iostream>
using namespace std;

int sum(int a, int b){
    
    return a+b;
}

int main(){

    int x, y;

    cout << "Enter numbers to sum = ";
    cin >> x >> y;

    cout << "Sum = " << sum(x, y);

    return 0;
}
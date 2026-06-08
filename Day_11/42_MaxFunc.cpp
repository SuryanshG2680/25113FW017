//Write function to find maximum

#include <iostream>
using namespace std;

int max(int a, int b){

    return a>b? a : b;
}

int main(){

    int x, y;

    cout << "Enter numbers to find the max: ";
    cin >> x >> y;

    cout << "Maximum = " << max(x , y);

    return 0;
}
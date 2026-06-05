//Program to Print repeated-number pattern

#include <iostream>
using namespace std;

int main(){

    int rows, c=0;

    cout << "Enter number of rows : ";
    cin >> rows ;

    for( int i=1; i<=rows; i++){
        c++;
        for( int j=1; j<=i; j++){
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
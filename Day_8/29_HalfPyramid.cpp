//Program to Print half pyramid pattern

#include <iostream>
using namespace std;

int main(){
    
    char a;
    int rows;

    cout << "Enter number of rows";
    cin >> rows;

    cout << "Enter character to print";
    cin >> a;

    for( int i=0; i<rows; i++){
        for( int j=0; j<=i; j++){
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}
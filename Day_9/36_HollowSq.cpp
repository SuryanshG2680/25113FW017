//Program to Print hollow square pattern

#include <iostream>
using namespace std;

int main(){

    int rows;

    cout << "Enter number of rows ";
    cin >> rows;

    if(rows<=0) {
        cout << "Invalid Size";
        return 0;
    }

    for (int i=1; i<=rows; i++){
        for (int j=1; j<=rows; j++){
            if(i==1 || i==rows || j == 1 || j == rows)
                cout << "*  ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    return 0;
}
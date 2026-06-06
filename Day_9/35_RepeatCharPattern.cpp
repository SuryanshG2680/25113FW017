//Program to Print repeated-character pattern

#include <iostream>
using namespace std;

int main(){

    int rows;
    char c=65;

    cout << "Enter number of rows (1-26) : ";
    cin >> rows ;

    if(rows<=0) {
        cout << "Invalid Size";
        return 0;
    }

    for( int i=1; i<=rows; i++){
        
        if( i > 26){
            cout << "Limit Exceeded";
            return 0;
        }
        for( int j=1; j<=i; j++){
            cout << c << " ";
        }
        c++;
        cout << endl;
    }

    return 0;
}
//Program to Print reverse number triangle


#include <iostream>
using namespace std;

int main(){

    int rows;

    cout << "Enter number of rows : ";
    cin >> rows ;

    if(rows<0) cout << "Invalid Size";


    for( int i=rows; i>0; i--){
        for( int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
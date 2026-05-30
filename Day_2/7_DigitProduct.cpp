//Product of digitd of given number

#include <iostream>
using namespace std;

int main()
{
    int n, c, prod=1;
    cout << "Enter N: ";
    cin >> n;

    for(int x=n; x>0; x/=10){
      c= x%10;  
      prod=prod*c;
    }
    cout << "Product of digits = " << prod;

    return 0;
}

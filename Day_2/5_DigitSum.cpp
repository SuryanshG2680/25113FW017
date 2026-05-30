//Sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n, c, sum=0;
    cout << "Enter N: ";
    cin >> n;

    for(int x=n; x>0; x/=10){
      c= x%10;  
      sum=sum+c;
    }
    cout << "Sum of digits = " << sum;

    return 0;
}

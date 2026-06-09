//Write function for perfect number

#include <iostream>
using namespace std;

bool perfect(int x);

int main()
{
    int a;

    cout << "Enter N: ";
    cin >> a;

    perfect(a)? cout << "The number is perfect"
            : cout << "The number is NOT perfect";

    return 0;
}

bool perfect(int x){

    int sum=0;

    if (x <= 0)  return false;

    for(int i=1; i<=x/2; i++)
    {
        if(x%i == 0) sum += i; 
    }
    
    return sum==x;
}
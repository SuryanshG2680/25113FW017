//Program for duplicate search

#include <iostream>
#include <vector>
using namespace std;


int main(){

    int n;
    cout << "Enter size of array = ";
    cin >> n;

    if(n<=0)
    {
        cout << "Invalid Array size";
        return 0;
    }

    vector <int> arr(n);
    cout << "Enter Array elements: ";
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int count=0;
    cout << "Duplicates in the array are- ";

    for(int i=0; i<n; i++)
    {
       int c=0;

       for (int j=i+1; j<n; j++)
       {
           if(arr[i] == arr[j]) c++;
       }

       for (int k=0; k<i; k++)
       {
            if(arr[i] == arr[k]) c=0;
       }
       
       if(c>0) 
       {
        cout << arr[i] << " ";
        count++;
       } 

    }
    if(count==0) cout << "\rNo duplicates found in given array";

    return 0;
}
//Program to frequency of an element

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

    //FREQUENCY
    int num, count=0;
    cout << "Enter element to search = ";
    cin >> num;

    for(int i=0; i<n; i++)
    {
        if(num == arr[i])
        {
            count++;
        }
    }
    
    cout << "The frequency of the element is = " << count ;

    return 0;
}
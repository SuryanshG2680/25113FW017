//Program for Linear Search

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

    //SEARCH
    int search, c=0;
    cout << "Enter element to search = ";
    cin >> search;

    cout << "The element was found at position";
    for(int i=0; i<n; i++)
    {
        if(search == arr[i])
        {
            cout << " '" << i+1 << "' ";
            c++;
        }
    }

    if(c == 0) cout << "\rThe element does not exist in the array";

    return 0;
}
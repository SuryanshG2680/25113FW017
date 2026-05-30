//Print Prime Numbers in a Range

#include <iostream>
using namespace std;

int main()
{
    int start, end, i, j;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        bool prime = true;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << i << " ";
    }

    return 0;
}
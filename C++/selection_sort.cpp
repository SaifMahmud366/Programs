#include <iostream>
using namespace std;

int main()
{
    int n, temp, minIndex;
    cout << "Enter N = ";
    cin >> n;
    int a[n];

    cout<<"Enter Array Value :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;
    }

    cout<<"After Sorting : "
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
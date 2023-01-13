#include<iostream>
using namespace std;

int main()
{
    int i,j,n,temp,flag;
    cout<<"Enter N = ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Value : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n-1; i++)
    {
        flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[ j + 1 ] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    cout<<"After Sorting  = ";
    for (i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}

// https://www.youtube.com/watch?v=PbbC4FZQia4
// Time Complexity  = n(n^2)
// Space Complexity = n(1)
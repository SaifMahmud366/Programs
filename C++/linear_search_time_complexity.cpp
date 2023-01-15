#include<iostream>
using namespace std;
int main()
{
    int n,i, num, index;
    cout<<"Enter N = ";
    cin>>n;
    int arr[n];
    cout<<"Enter Numbers: ";

    for(i=0; i<n; i++)
        cin>>arr[i];

    cout<<"\nEnter a Number to Search: \n";
    cin>>num;

    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at No."<<index+1;
    return 0;
}
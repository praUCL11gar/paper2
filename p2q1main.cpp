#include <iostream>

using namespace std;

//1. Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.
// time complexity O(n), we put last element as high as it is always a leader
//then we iterate towards left and compare it with high, if element is greater
//than high, its also a leader
//prasanna garole

void fn(int arr[],int n)
{
    int high=arr[n-1];

    cout<<high<<" ";

    for(int i=n-2;i>=0;i--)
    {
        if(high<arr[i])
        {
            high=arr[i];
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n]={0};


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Leaders are:";
    fn(arr,n);


    return 0;
}

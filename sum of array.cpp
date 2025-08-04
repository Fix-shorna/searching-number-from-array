#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size: ";
    cin>>x;
    int arr[x];
    int sum =0;
    cout<<"Enter the elements:";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The total sum of all elements:"<<sum;
    return 0;
}

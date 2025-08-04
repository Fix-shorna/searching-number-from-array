#include<iostream>
using namespace std;
int main()
{
    int x,z;
    cout<<"which number you want to search?";
    cin>>x;
    int arr[10]={5,10,11,17,5,32,5,47,53,64};
    for(int i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            z++;
        }
    }
    if(z==0)
    {
        cout<<"searching number is not found.\n";
    }
    else
    {
         cout<<"searching number is  found "<<z<<"times";

    }
    return 0;
}

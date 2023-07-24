#include<iostream>
using namespace std;

int main()
{
    int n,maxin,minin;
    int min=101;
    int max=0;
    int i=0;
    int arr[10];
    cout<<"Enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
            minin=i;
        }
    }
     for(int i=minin;i<n;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
            maxin=i;
        }
    }
    cout<<"The day to sell"<<maxin+1<<endl;
    
    cout<<"The day to buy"<<minin+1<<endl;
    int max_profit=0;
    max_profit=max-min;
    cout<<max_profit;
}

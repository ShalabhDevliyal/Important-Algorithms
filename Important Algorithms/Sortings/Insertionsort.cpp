#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<" Enter the elements in array :";          
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)                         
    {
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        if(i!=j+1)
        {
            arr[j+1]=key;
        }
    }
      cout<<" The sorted  elements in array :";          
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

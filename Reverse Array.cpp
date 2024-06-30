#include <bits/stdc++.h>

using namespace std;

void rev(int i,int arr[],int n)
{
    if(i>n)
    return;
    
    swap(arr[i],arr[n-1]);
    rev(i+1,arr,n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    rev(0,arr,n);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

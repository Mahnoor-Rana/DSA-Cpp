#include<iostream>
//#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int s, int e)
{
    while(s<e)
    {
    int temp;
    temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;

    }
}
 void display(int arr[],int size)
 {
 for(int i=0;i<=size;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 }
 
int main()
{
    int arr[]={1,5,6,8,9,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    reverse(arr,0,n-1);
    display(arr,n);
    return 0;
}
#include<iostream>
using namespace std;

void input(int *a, int n)
{
    cout<<"Enter the elements in your Array \n";
    for(int i=0;i<n;i++)
    cin>>a[i];
}

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}

int max(int a[], int n)
{
    int mx=a[0];
    for(int i=0;i<n;i++)
    if(a[i]>mx)
    mx=a[i];
    return mx;
}

int min(int a[], int n)
{
    int mn=a[0];
    for(int i=0;i<n;i++)
    if(a[i]<mn)
    mn=a[i];
    return mn;
}

int main()
{
    int *arr, n;
    cout<<"Enter the size of your Array:\n";
    cin>>n;
    arr=new int [n];
    input(arr,n);
    cout<<"Original Array : ";
    display(arr,n);
    cout<<"Maximum element in the Array : "<<max(arr,n)<<"\n";
    cout<<"Minimum element in the Array : "<<min(arr,n)<<"\n";
    return 0;
}
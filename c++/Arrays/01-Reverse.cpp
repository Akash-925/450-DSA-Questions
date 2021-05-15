#include<iostream>
using namespace std;

void input(int *a, int n)
{
    cout<<"Enter the elements in your Array\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
}

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}

void reverse(int *a, int n)
{
    for(int i=0;i<n/2;i++)
    swap(a[i],a[n-i-1]);
}

int main()
{
    int *arr, n;
    cout<<"Enter the size of your Array: \n";
    cin>>n;
    arr=new int[n];
    input(arr,n);
    cout<<"Original Array : ";
    display(arr,n);
    cout<<"Reversed Array : ";
    reverse(arr,n);
    display(arr,n);
    return 0;
}
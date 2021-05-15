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

void move(int *a,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(a[i]<0)
        i++;
        while(a[j]>=0)
        j--;
        if(i<j)
        swap(a[i],a[j]);
    }
}

int main()
{
    int *arr, n;
    cout<<"Enter the size of your Array: "<<endl;
    cin>>n;
    arr=new int[n];
    input(arr,n);
    cout<<"Original Array : ";
    display(arr,n);
    cout<<"New Array : ";
    move(arr,n);
    display(arr,n);
    return 0;
}
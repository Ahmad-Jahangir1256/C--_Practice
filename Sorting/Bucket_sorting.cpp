#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int b[max+1]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int i=0,j=0;
    while(i<max+1)
    {
        if(b[i]>0)
        {
            a[j]=i;
            b[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
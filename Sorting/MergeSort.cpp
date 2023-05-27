#include<bits/stdc++.h>
using namespace std;
void Merge(int *a,int i,int mid,int j)
{
    int ki = i,ke=mid+1,k=0;
    int temp[j-i+1];
    while(ki<=mid&&ke<=j)
    {
        if(a[ki]<a[ke])
        {
            temp[k++]=a[ki++];
        }
        else if(a[ki]>a[ke])
        {
            temp[k++]=a[ke++];
        }
        else
        {
            temp[k++]=a[ki++];
            temp[k++]=a[ke++];
        }
    }
    while(ki<=mid)
    {
        temp[k++]=a[ki++];
    }
    while(ke<=j)
    {
        temp[k++]=a[ke++];
    }
    k=0;
    for(int b = i;b<=j;b++)
    {
        a[b]=temp[k++];
    }
}
void MergeSort(int *a,int i,int j)
{
    if(i==j)
    {
        return;
    }
    int mid = i+(j-i)/2;
    MergeSort(a,i,mid);
    MergeSort(a,mid+1,j);
    Merge(a,i,mid,j);
}
int main()
{
    int a[]={1,3,4,3,1,2,4,3,8,7};
    int n = sizeof(a)/sizeof(int);
    cout<<"Unsorted"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    MergeSort(a,0,n-1);
    cout<<"Sorted"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
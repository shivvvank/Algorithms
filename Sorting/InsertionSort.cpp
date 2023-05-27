#include<bits/stdc++.h>
using namespace std;
void InsSort(int* a,int n)
{
    int i,key,j;
    for(int i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main()
{
    int a[]={1,3,4,3,1,2,4,3,8,7};
    cout<<"Unsorted"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    InsSort(a,sizeof(a)/sizeof(int));
    cout<<"Sorted"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
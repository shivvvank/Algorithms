#include<bits/stdc++.h>
using namespace std;
void reverseArray(int *a,int i,int j)
{
    if(i>=j)
        return;
    a[i]=a[i]+a[j];
    a[j]=a[i]-a[j];
    a[i]=a[i]-a[j];
    reverseArray(a,i+1,j-1);
}
int main()
{
    int a[]={2,3,4,3,2,1};
    for(int i =0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverseArray(a,0,5);
    for(int i =0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
    Time : O(n/2)
    Space : O(n/2)
*/
#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int* y)
{
    int t = *y;
    *y = *x;
    *x = t;
}
void permute(int* a,int n,int index,vector<vector<int>>& ans)
{
    if(index==n)
    {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(a[i]);
        }
        ans.push_back(v);
        return;
    }
    for(int i=index;i<n;i++)
    {
        swap(a[i],a[index]);
        permute(a,n,index+1,ans);
        swap(a[i],a[index]);
    }
}
int main()
{
    vector<vector<int>> ans;
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    permute(a,n,0,ans);
    for(auto i : ans)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Count:"<<ans.size()<<endl;
    return 0;
}
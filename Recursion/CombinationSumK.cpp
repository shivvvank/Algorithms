#include<bits/stdc++.h>
using namespace std;
void helper(int *a,int n,int i,int sum,vector<int> v,set<vector<int>> &s)
{
    if(i==n)
    {
        if(sum==0)
        {
            s.insert(v);
        }
        return;
    }
    helper(a,n,i+1,sum,v,s);
    if(sum>=a[i])
    {
        sum -=a[i];
        v.push_back(a[i]);
        helper(a,n,i,sum,v,s);
    }
}
void PrintCombination(int *a,int n,int k,set<vector<int>> &s)
{
    vector<int> v;
    int sum = 0;
    helper(a,n,0,k,v,s);
    for(auto i : s)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[] = {2,3,6,7};
    set<vector<int>> s;
    int n = sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    PrintCombination(a,n,k,s);
    return 0;
}
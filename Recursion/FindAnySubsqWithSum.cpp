#include<bits/stdc++.h>
using namespace std;
bool FindAnySubsqWithSumK(int * a,int i,int n,int sum,int k,vector<int> v)
{
    if(i==n)
    {
        if(sum==k)
        {
            for(auto j : v)
            {
                cout<<j<<" ";
            }
            cout<<endl;
            return true;
        }
        else
            return false;
    }
    
    if(FindAnySubsqWithSumK(a,i+1,n,sum,k,v)==true)
    {
        return true;
    }
    sum+=a[i];
    v.push_back(a[i]);
    if(FindAnySubsqWithSumK(a,i+1,n,sum,k,v)==true)
    {
        return true;
    }
    return false;
}
int main()
{
    int a[] = {1,2,3,2,4,1,2,1};
    int n;
    vector<int> v;
    bool ans = FindAnySubsqWithSumK(a,0,8,0,5,v);
    return 0;
}
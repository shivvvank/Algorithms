#include<bits/stdc++.h>
using namespace std;
void FindSubsetSum(int *a,int n,int i,int sum,vector<int>& sumsub)
{
    if(i==n)
    {
        sumsub.push_back(sum);
        return;
    }
    FindSubsetSum(a,n,i+1,sum,sumsub);
    sum+=a[i];
    FindSubsetSum(a,n,i+1,sum,sumsub);
}
int main()
{
    int a[] = {2,6,3};
    int n = sizeof(a)/sizeof(int);
    vector<int> sumsubs;
    FindSubsetSum(a,n,0,0,sumsubs);
    sort(sumsubs.begin(),sumsubs.end());
    for(auto i : sumsubs)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
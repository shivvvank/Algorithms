#include<bits/stdc++.h>
using namespace std;
int SumOfSubsq(int *a,int i,int n,int sum,int k,vector<int> v)
{
    if(i==n)
    {
        if(sum==k)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int ans = SumOfSubsq(a,i+1,n,sum,k,v);
    sum+=a[i];
    v.push_back(a[i]);
    ans +=SumOfSubsq(a,i+1,n,sum,k,v);
    return ans;
}
int main()
{
    int a[] = {1,2,3,2,4,1,2,1};
    int n;
    vector<int> v;
    cout<<SumOfSubsq(a,0,8,0,5,v)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void permuteHelper(int *a,int n,vector<int> v,vector<vector<int>>& ans,int* freq)
{
    if(v.size()==n)
    {
        ans.push_back(v);
        return;
    }
    for(int i = 0;i<n;i++)
    {
        if(!freq[i])
        {
            freq[i]=true;
            v.push_back(a[i]);
            permuteHelper(a,n,v,ans,freq);
            v.pop_back();
            freq[i]=false;
        }
    }
}
vector<vector<int>> permute(int *a,int n)
{
    vector<vector<int>> ans;
    vector<int> v;
    int freq[n];
    memset(freq,0,sizeof(freq));
    permuteHelper(a,n,v,ans,freq);
    return ans;
}
int main()
{
    vector<vector<int>> ans;
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    ans = permute(a,n);
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
#include<bits/stdc++.h>
using namespace std;
list<vector<int>> GeneratePowerSet(int *a,int n)
{
    list<vector<int>> ans;
    vector<int> temp;
    list<vector<int>>::iterator it = ans.begin();
    int last = pow(2,n)-1;
    for(int i=0;i<=last;i++)
    {
        vector<int> v;
        for(int j = 0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(a[j]);
            }
        }
        ans.insert(it,v);
    }
    return ans;
}
int main()
{
    list<vector<int>> l;
    int a[] = {2,3,6,7};
    int n = sizeof(a)/sizeof(int);
    l = GeneratePowerSet(a,n); 
    for(auto i : l)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
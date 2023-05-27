#include<bits/stdc++.h>
using namespace std;
/* 
    can handle negative number too
*/
void PrintSubsqWithSumk(int *a,int i,int n,int k,vector<int> v,int sum)
{
    if(i==n)
    {
        if(sum==k)
        {
            for(auto i:v)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    PrintSubsqWithSumk(a,i+1,n,k,v,sum);
    sum+=a[i];
    v.push_back(a[i]);
    PrintSubsqWithSumk(a,i+1,n,k,v,sum);
}
int main()
{
    int a[]={1,2,1};
    int sum = 0;
    vector<int> v;
    PrintSubsqWithSumk(a,0,3,2,v,sum);
    return 0;
}
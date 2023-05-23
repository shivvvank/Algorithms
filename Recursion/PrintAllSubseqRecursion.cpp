#include<bits/stdc++.h>
using namespace std;
void printAllSubsq(int *a,int i,int n,vector<int> subsq)
{
    if(i==n)
    {
        for(auto i : subsq)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }
    printAllSubsq(a,i+1,n,subsq);
    subsq.push_back(a[i]);
    printAllSubsq(a,i+1,n,subsq);
}
int main()
{
    int a[] ={2,3,4,3,1};
    vector<int> s;
    printAllSubsq(a,0,5,s);
    return 0;
}

/*
    Time : O(2^n)
    Space : O(2^n)
*/
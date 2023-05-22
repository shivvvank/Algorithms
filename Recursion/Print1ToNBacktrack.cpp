#include<bits/stdc++.h>
using namespace std;
void Print1ToNBacktrack(int i,int n)
{
    if(i<1)
        return;
    Print1ToNBacktrack(i-1,n);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    Print1ToNBacktrack(n,n);
    return 0;
}
/*
    Time : O(n)
    Space : O(n)
*/
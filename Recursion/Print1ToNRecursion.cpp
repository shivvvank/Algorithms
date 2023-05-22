#include<bits/stdc++.h>
using namespace std;
void Print1ToN(int i,int n)
{
    if(i>n)
        return;
    cout<<i<<endl;
    Print1ToN(i+1,n);
}
int main()
{
    int n ;
    cout<<"Enter n : ";
    cin>>n;
    Print1ToN(1,n);
    return 0;
}
/*
    Time : O(n)
    Space : O(n)
*/
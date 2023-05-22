#include<bits/stdc++.h>
using namespace std;
void PrintNTo1Backtrack(int i,int n)
{
    if(i>n)
        return;
    PrintNTo1Backtrack(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int n ;
    cout<<"Enter n : ";
    cin>>n;
    PrintNTo1Backtrack(1,n);
    return 0;
}
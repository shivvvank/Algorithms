#include<bits/stdc++.h>
using namespace std;
void PrintNTo1(int i,int n)
{
    if(i<1)
        return;
    cout<<i<<endl;
    PrintNTo1(i-1,n);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    PrintNTo1(n,n);
    return 0;
}
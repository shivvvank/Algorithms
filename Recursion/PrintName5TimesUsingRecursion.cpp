#include<bits/stdc++.h>
using namespace std;
void PrintNameNTimes(string name,int i,int n)
{
    if(i>n)
        return;
    cout<<name<<endl;
    PrintNameNTimes(name,i+1,n);   
}
// Driver Code
int main()
{   
    string name;
    int n;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    PrintNameNTimes(name,1,n);
    return 0;
}
/*
    time : O(n)
    space : O(n)
*/
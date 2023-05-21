#include<bits/stdc++.h>
using namespace std;
int c = 0;
void PrintName5Times(string name)
{
    if(c==5)
        return;
    cout<<name<<endl;
    c++;
    PrintName5Times(name);
}

// Driver Code
int main()
{   
    string name;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<endl;
    PrintName5Times(name);
    return 0;
}
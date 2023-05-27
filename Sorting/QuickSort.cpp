#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int partition(int *a,int low,int high)
{
    int pivot = low;
    int i = low,j = high;
    while(i<j)
    {
        while(a[i]<=a[pivot]&&i<high)
        {
            i++;
        }
        while(a[j]>a[pivot]&&j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[j],&a[low]);
    return j;
}
void QuickSort(int * a, int low,int high)
{
    if(low<high)
    {
        int patn = partition(a,low,high);
        QuickSort(a,low,patn-1);
        QuickSort(a,patn+1,high);
    }
}
int main()
{
    int a[]={1,3,4,3,1,2,4,3,8,7};
    // int a[] = {4,6,2,5,7,9,1,3}; 
    int n = sizeof(a)/sizeof(int);
    cout<<"Unsorted"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    QuickSort(a,0,n-1);
    cout<<"Sorted"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
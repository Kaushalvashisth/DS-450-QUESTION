#include <bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n){
    int x=arr[n-1];
    for (size_t i = n-1; i >0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}
void printArray(int a[],int n){
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int a[]={0,-9,16,-90,185,-90,1,-3,43,46,-9,-8};
    int n=sizeof(a)/sizeof(a[0]);
    rotate(a,n);
    printArray(a,n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// time O(n)
void moveNegativeAside(int a[],int n){
    int low=0,high=n-1;
    while (low<=high)
    {
        if (a[low]<0)
        {
            swap(a[low],a[high]);
            high--;
        }else{
            low++;
        }
    }
    
}
void printArray(int a[],int n){
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(int argc, const char** argv) {
    int a[]={0,-9,16,-90,185,-90,1,-3,43,46,-9,-8};
    int n=sizeof(a)/sizeof(a[0]);
    moveNegativeAside(a,n);
    printArray(a,n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int maxSumSubArray(int a[],int n){
    int maxSum=numeric_limits<int>::min();;
    int curSum=0;

    for (size_t i = 0; i < n; i++)
    {
        curSum=curSum+a[i];
        if(curSum>maxSum)maxSum=curSum;
        if(curSum<0)curSum=0;
    }
    return maxSum;
}
int main(int argc, char const *argv[])
{
    int a[]={-9,-10,23,-20,40};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<maxSumSubArray(a,n);
    return 0;
}

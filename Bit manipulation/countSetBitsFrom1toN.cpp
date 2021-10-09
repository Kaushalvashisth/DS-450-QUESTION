#include <bits/stdc++.h>
using namespace std;

int largestPowerOf2(int n){
    int x=0;
    while ((1<<x)<=n)
    {
       x++;//1 extra x will be there
    }
    return x-1;
}
int solve(int n){
    // base case of recursion
    if(n==0){
        return 0;
    }
    int a=largestPowerOf2(n);
    // bits before largest power of 2 =(2^(a-1))*a
    //  + 
    // msb(front) bits of (n-largestPowerValue) =n-2^a+1 
    // +
    // solve again for (n-largestPowerValue) again =solve(n-2^a)
    return (1<<(a-1))*a + (n-(1<<a)+1) +solve(n-(1<<a));
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    std::cout << solve(n) << std::endl;
    return 0;
}

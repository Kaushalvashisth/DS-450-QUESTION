#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int count=0;
    while (n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int a=7;  // bin=0111  // set bits=3
    cout<<countSetBits(a);
    return 0;
}

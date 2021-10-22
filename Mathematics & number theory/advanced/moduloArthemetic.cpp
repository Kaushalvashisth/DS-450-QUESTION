#include <bits/stdc++.h>
using namespace std;


#define ll long long
const int N=1e5+2, M=1e9+7;
// (a^b)
ll fastPower(ll a, ll b){ // for long integers
    ll ans=1;
    while (b>0)
    {
        if ((b&1)!=0)// check odd
        {
            ans=ans*a;
        }
        a=a*a;
        b=b>>1; 
    }
    return ans;
}
// (a^b)%mod
ll fastPowerMod(ll a, ll b){ // for long integers
    ll ans=1;
    while (b>0)
    {
        if ((b&1)!=0)// check odd
        {
            ans=((ans)*(a%M))%M;//(a*b)%m = (a%m)*(b%m)
        }
        a=((a%M)*(a%M))%M;
        b=b>>1; 
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    cout<<fastPowerMod(4,4); // int overflow
    return 0;
}

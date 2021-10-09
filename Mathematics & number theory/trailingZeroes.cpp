#include <bits/stdc++.h>
using namespace std;
int TrailingZeroesInFacto(long long int n){
    if(n<5)return 0;
    int res=0;
    for (size_t i = 5; i <=n; i*=5)
    {
        res+=n/i; // n/5 + n/25 + ......n/(5^k)
    }
    return res;
}
int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    std::cout << TrailingZeroesInFacto(n) << std::endl;
    return 0;
}

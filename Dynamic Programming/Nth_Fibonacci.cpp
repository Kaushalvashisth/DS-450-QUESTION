#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector <int>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N=1e5+2, MOD=1e9+7;

//memoization 
int dp[N];
int fib_memoization(int n){
    if(n==0||n==1)
        return 0;
    if(n==2)
        return 1;

    if(dp[n]!=-1)
        return dp[n];
    
    dp[n]=fib_memoization(n-1)+fib_memoization(n-2);
    return dp[n];
}

int fib_tabulation(int n){
    vi dp(n+1);
    dp[0]=dp[1]=0;
    dp[2]=1;
    for (int i = 3; i <=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    return dp[n]; 
}
signed  main() {
    int n;
    cin>>n;
    rep(i,0,N){
        dp[i]=-1;
    }
    
    std::cout << fib_memoization(n) << std::endl;
    std::cout << fib_tabulation(n) << std::endl;

    return 0;
}
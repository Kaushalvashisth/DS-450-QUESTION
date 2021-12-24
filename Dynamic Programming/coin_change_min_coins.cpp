#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define vi vector <int>

int minCoins(int n, vi a,vi& dp){
    // to get 0 we need 0 coins
    if (n==0) return 0;

    int ans = INT_MAX;

    for (int i = 0; i < a.size(); i++){
        if(n-a[i]>=0){

            int subAns=0;
            if(dp[n-a[i]]!=-1){

                subAns=dp[n-a[i]];

            }
            else{
                subAns=minCoins(n-a[i],a,dp);
            }

            if (subAns!=INT_MAX && subAns+1<ans  )
            {
                ans=subAns+1;
            }      
        }
        
    }
    
    return dp[n]=ans;
}
signed main(){
    // n= total money needed
    // size= coins array size
    //  a=coin array
    vi a;
    int size,temp,n;
    cin>>n>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    
    // std::cout << n << std::endl;
    
    vi dp(n+1,-1);
    dp[0]=0;
    
    // std::cout << n << std::endl;
    

    std::cout <<minCoins(n,a,dp) << std::endl;

    for(int x:dp){
        std::cout << x << " ";
    }
    
    return 0;
}
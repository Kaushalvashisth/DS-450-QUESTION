#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define vi vector <int>

int minimumCoins(int total, int *a,int dp[],int n){
    // to get 0 we need 0 coins
    if (total==0) return 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++){
        if (total-a[i]>=0)
        {   int subAns=0;

            if(dp[total-a[i]]!=-1){
                subAns=dp[total-a[i]];
            }
            else{
                subAns=minimumCoins(total-a[i],a,dp,n);
            }

            // subAns+1 because curent coin is not counted 
            if (subAns!=INT_MAX && subAns+1<ans)
            {
                ans=subAns+1;

            }
        }
    }
    dp[n]=ans;
    return ans;
}
signed main(){
    // total= total money needed
    // n= coins array size

    int total=18;
    int a[]={7,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    // std::cout << n << std::endl;
    
    int dp[total+1];
    fill(dp,dp+total,-1);
    dp[0]=0;


    std::cout <<minimumCoins(total,a,dp,n) << std::endl;

    for(int x:dp){
        std::cout << x << " ";
    }
    std::cout << n << std::endl;
    return 0;
}
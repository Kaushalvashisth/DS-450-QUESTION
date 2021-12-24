#include <bits/stdc++.h>
using namespace std;

// #define int long long
// #define vi vector <int>

long long int count(int S[], int m, int n) {

        // code 
        vector<long long int> dp(n+1,0);
        dp[0]=1;
        for(long long int i=0;i<m;i++){
            for(long long int j=S[i];j<dp.size();j++){
                dp[j]+=dp[j-S[i]];
            }
        }
        return dp[n];
}

signed main(){
    int n;//target amount
    int m;//no of coins
    cin>>n>>m;

    int S[m];//coin array
    

    for (int i = 0; i < m; i++)
    {
        cin>>S[i];
    }
    
    std::cout << count(S,m,n) << std::endl;

    return 0;
}
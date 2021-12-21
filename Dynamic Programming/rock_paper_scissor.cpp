// naive solution
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector <int>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int  MOD=1e9+7;

string rsp_naive(string s,int n){
    string result="";
        for (int i = 0; i < n; i++) {
            if(i==n-1){
                result+=s[n-1];
                break;
            }
            
            if(i!=0 && s[i]==s[i-1]){
                result+=result[i-1];
                i++;
            }
            
            char temp=s[i];
            for (int j = i+1; j < n; j++) {
                if(temp=='R' && s[j]=='P')temp='P';
                else if(temp=='P' && s[j]=='S')temp='S';
                else if(temp=='S' && s[j]=='R')temp='R';
            }
            result+=temp;
        }
    return result;
}

void rsp_dp(string s,int n){
    vector<char> dp_r(n-1);
        vector<char> dp_p(n-1);
        vector<char> dp_s(n-1);
        vector<char> result(n);
        
        result[n-1]=s[n-1];
        if(n==1){
            cout<<s<<"\n";
            return;
        }
        if(s[n-1]=='R'){
            dp_r[n-2]='R';
            dp_p[n-2]='P';
            dp_s[n-2]='R';
        }
        else if(s[n-1]=='P'){
            dp_r[n-2]='P';
            dp_p[n-2]='P';
            dp_s[n-2]='S';
        }
        else if(s[n-1]=='S'){
            dp_r[n-2]='R';
            dp_p[n-2]='S';
            dp_s[n-2]='S';
        }
        
        if(s[n-2]=='R') 
            result[n-2]=dp_r[n-2];
        else if(s[n-2]=='P')
            result[n-2]=dp_p[n-2];
        else 
            result[n-2]=dp_s[n-2];
        
        for (int i = n-3; i >=0; i--) {
            if(s[i+1]=='R'){
                dp_r[i]=dp_r[i+1];
                dp_p[i]=dp_p[i+1];
                dp_s[i]=dp_r[i+1];
            }
            else if(s[i+1]=='P'){
                dp_r[i]=dp_p[i+1];
                dp_p[i]=dp_p[i+1];
                dp_s[i]=dp_s[i+1];
            }
            else if(s[i+1]=='S'){
                dp_r[i]=dp_r[i+1];
                dp_p[i]=dp_s[i+1];
                dp_s[i]=dp_s[i+1];
            }
            
            if(s[i]=='R')result[i]=dp_r[i];
            else if(s[i]=='P')result[i]=dp_p[i];
            else if(s[i]=='S')result[i]=dp_s[i];
        }
        rep(i,0,n) {
            cout<<result[i];
        }
        cout<<"\n";
}

void solve(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    int  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        
        cout<<rsp_naive(s,n)<<"\n";
        
    }
}

signed main() {
    solve();
	return 0;
}

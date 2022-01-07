#include <bits/stdc++.h>
using namespace std;

#define int long long
const int  MOD=1e9+7;
const int N=1e7;

string verySimple(string s){
    if(s.find("10") != std::string::npos || s.find("11") != std::string::npos){
        return "Yes";
    }
    return "No";
}
void solve(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    int  t;
    cin>>t;
    
    // call sieve
    // soe();
    while(t--)
    {
        string s;
        cin>>s;
        
        cout<<verySimple(s)<<"\n";
        
    }
}

signed main() {
    solve();
	return 0;
}

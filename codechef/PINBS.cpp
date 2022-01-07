#include <bits/stdc++.h>
using namespace std;

#define int long long
// const int  MOD=1e9+7;
// const int N=1e7;

// bool isPrime[N];

// void soe(){
//     fill(begin(isPrime),end(isPrime),true);
    
//     isPrime[0]=isPrime[1]=false;
    
//     for (int i = 2; i <=sqrt(N); i++) {
//         // if(!isPrime[i])
//         //     continue;
    
//         for (int j = i*2; j <=N; j+=i) {
//             isPrime[j]=false;
//         }
//     }
// }

// string binaryPrime(string s){
//     for (int i = 0; i < s.length(); i++) {
//         string s2="";
//         for(int j=i;j<s.length();j++){
//             s2+=s[i];
//             int num=std::stoi(s2, nullptr, 2);
//             if(isPrime[num]){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
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

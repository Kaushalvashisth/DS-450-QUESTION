#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD=1e9+7;
string solve(int n, string s){
    int temp=s[0]-'0';
    for (int i = 1; i < n; i++)
    {
        if(s[i]=='0'&&temp==0){
            temp=0;
        }else{
            temp=1;
        }
    }
    
    return (temp)?"YES":"NO";   
}


int main(int argc, char const *argv[])
{
    int  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        // std::cout << stoi(n, 0, 2) << std::endl;
        std::cout << solve(n,s)<< std::endl;
    }
	return 0;
}
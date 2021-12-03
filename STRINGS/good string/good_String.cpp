#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD=1e9+7;

int calValue(string s){
    vector<int> vect;

    char temp=s[0];
    int count=1;
    for (int i = 1; i <=s.length(); i++)
    {
        if (s[i]==temp)
        {
            count++;
        }else{
            vect.push_back(count);
            count=1;
        }
        temp=s[i];
    }
    int x=0;
    for (int i = 0; i < vect.size(); i++)
    {
        x=x^vect[i];
        // std::cout << " \t\t"<<vect[i] << std::endl;
    }
    return x;
}
int solve(int k,string s){
    if(calValue(s)==k)return 0;
    int count=0;
    for (int i = 0; i < s.length()-1; i++)
    {
        string s2="";
        s2+=s[i+1];
        s2+=s[i];
        s2+=s.substr(i+2,s.length()-1);
        // std::cout << " \t\t"<<s2 << std::endl;
        count++;
        if(calValue(s2)==k)return count;
    }
    
    return calValue(s);
}
int main(int argc, char const *argv[])
{
    int  t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        int k;
        cin>>k;
        // std::cout << stoi(n, 0, 2) << std::endl;
        std::cout << solve(k,s)<< std::endl;
    }
	return 0;
}
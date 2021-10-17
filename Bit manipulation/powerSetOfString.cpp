// Given a string S find all possible 
// subsequences of the string in lexicographically-sorted order.
// 'abc' -> a,ab,abc,ac,b,bc,c

#include <bits/stdc++.h>
using namespace std;

vector <string> AllPossibleStrings(string s){
    vector <string> vs;
    int n=s.size();
    int powOf2=(1<<n);
    for (int i = 1; i < powOf2; i++)
    {   
        string str="";
        for (int j = 0; j < n; j++)
        {
            if(i&(1<<j)){
                str+=s[j];
            }
        }
        vs.push_back(str);  
    }
    sort(vs.begin(),vs.end());
    return vs;
}
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    vector <string> vs=AllPossibleStrings(s);
    for(auto i:vs){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}

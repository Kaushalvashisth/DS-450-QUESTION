#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

int main(){
    long long int a;
    cin>>a;
    auto s = std::to_string(a);
    string x="";
    for (size_t i = 0; i < s.size(); i++)
    {
        // int c=s[i]-'0';
        // std::cout << s[i]-'0' << std::endl;
        x+=std::to_string(9-(s[i]-'0'));
    }
    stringstream final(x);
    // long long int final2=0;
    final>>a;
    std::cout <<a<< std::endl;
    
    return 0;
}
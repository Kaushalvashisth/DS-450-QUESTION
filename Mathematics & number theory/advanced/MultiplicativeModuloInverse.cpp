#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N=1e5+2, MOD=1e9+7;

// ax+by=gcd(a,b);
// if b=0:
// ax=a --> x=1 y=0;
struct triplet{
    int x,y,gcd;
};

triplet extendedEuclid(int a,int b){
    // base case
    if (b==0)   
    {
        triplet ans;
        ans.gcd=a;
        ans.x=1;
        ans.y=0;
        return ans;
    }
    
    triplet smallAns=extendedEuclid(b,a%b);
    triplet ans;
    ans.gcd=smallAns.gcd;
    ans.x=smallAns.y;
    ans.y=smallAns.x-(a/b)*smallAns.y;

    return ans;
}
int multiplicativeModuloInverse(int a,int m){
    triplet temp=extendedEuclid(a,m);
    return temp.x;
}
signed main(){
    int a,m;
    cin>>a>>m;
    std::cout <<multiplicativeModuloInverse(a,m)<< std::endl;
    return 0;
}

// examples: 
// (14*b)%3=1  b=4 or -1
// (19*b)%2=1  
// (12*b)%7=1  b=3
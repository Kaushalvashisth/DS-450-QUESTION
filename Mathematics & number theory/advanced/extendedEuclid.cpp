#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N=1e5+2, MOD=1e9+7;

// ax + by =gcd(a,b);  we need 2 values x,y & gcd
// base case:

// if b=0 gcd(a,b)=a;  gcd(a,0)=a;
// so ax = a ----> x=1;
// y can be anything but assume y=0;

struct triplet{
    int x,y,gcd;
};

// fucntion to return a,b,gcd;
triplet extendedEuclid(int a, int b){
    // base case
    if(b==0){
        triplet ans;
        ans.gcd=a;
        ans.x=1;
        ans.y=0;
        return ans;
    }
    // we need to find gcd(b,a%b) to compare coefficient
    triplet smallAns=extendedEuclid(b,a%b);
    triplet ans;
    // a,b gcd wont change
    ans.gcd=smallAns.gcd;

    // by comparing coefficiant
    ans.x=smallAns.y;
    ans.y=smallAns.x-(a/b)*smallAns.y;
    return ans;
}
signed  main() {
    int a,b;
    cin>>a>>b;

    triplet ans=extendedEuclid(a,b);
    std::cout <<"GCD=" <<ans.gcd << std::endl;
    std::cout <<"Equation: " <<a<<"x + "<<b<<"y ="<<ans.gcd << std::endl;
    std::cout <<"X=" <<ans.x << std::endl;
    std::cout <<"Y=" <<ans.y << std::endl;

    return 0;
}
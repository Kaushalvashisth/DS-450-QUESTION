// HCF of 2 numbers
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return (a%b==0) ? b : gcd(b,a%b);
}
int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    std::cout << "HCF = "<<gcd(a,b) << std::endl;
    return 0;
}

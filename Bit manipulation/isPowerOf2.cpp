#include <bits/stdc++.h>
using namespace std;
bool isPowerofTwo(long long n){
    if(n==0||n<0){
        return 0;
    }
    return (ceil(log2(n))==floor(log2(n)));
}
int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    std::cout <<isPowerofTwo(n) << std::endl;
    return 0;
}

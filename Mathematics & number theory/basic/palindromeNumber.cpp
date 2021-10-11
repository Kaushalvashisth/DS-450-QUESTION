#include <bits/stdc++.h>
using namespace std;

bool isPalindromeNumber(int n){
    int temp=n;
    int temp2=0,rem=0;
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        temp2=temp2*10+rem;
    }
    return (temp==temp2)?true:false;
}
int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    if (isPalindromeNumber(n))
    {
        std::cout << "True" << std::endl;
    }else
    {
        std::cout << "False" << std::endl;
    }
    
    
    return 0;
}
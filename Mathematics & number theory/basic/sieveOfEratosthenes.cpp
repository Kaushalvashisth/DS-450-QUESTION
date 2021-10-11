// to check prime numbers between 1 to n
#include <bits/stdc++.h>
using namespace std;

void SOE(int n){
    bool isPrime[n+1];
    // memset used to set array values to true
    memset(isPrime,true,sizeof(isPrime));

    isPrime[0]=false;
    isPrime[1]=false;
    for (size_t i = 2; i*i<=n; i++)  //till i<=sqrt(n) or i*i<=n
    {
        // start from second multiple of i and keep adding i
        for (size_t j = i*2; j <=n; j+=i) 
        {
            isPrime[j]=false;
        }
        
    }
    // print all primes
    for (size_t i = 2; i <=n; i++)
    {
        if (isPrime[i])
        {
            cout<<i<<"  ";
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    SOE(n);
    return 0;
}
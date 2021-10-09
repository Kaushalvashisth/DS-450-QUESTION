#include <bits/stdc++.h>
using namespace std;
int isPowerOfTwo(unsigned n)
{
    return n && (!(n & (n - 1)));
}
int findPosition(int N) {
        // code here
        // if 0 or more than 1 set bit
        // not of power 2
        if(!isPowerOfTwo(N)){
            return -1;
        }
       
        // right shift till n is 0
        unsigned count=0;
        while (N!=0)
        {
            N=N>>1;
            count++;
            
        } 
        return count;
        // return log(n)/log2(n);
        // return pos;
    
    }
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    std::cout << findPosition(n) << std::endl;
    return 0;
}

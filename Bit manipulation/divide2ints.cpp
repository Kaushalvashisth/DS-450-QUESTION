#include <bits/stdc++.h>
using namespace std;
// #define ll long long int;
// not efficient
int division(long long int a,long long int b){
    // a dividend --- b is divisor
    int sign =((a<0)==(b<0))?1:-1; //if both hv same sign than +
    a=abs(a);
    b=abs(b);
    long long quotient = 0;
    for (int i = 31; i >= 0; --i) {
    
        if ((b << i) <= a) {         // b * 2^i <=a
        a -= (b << i);               // a=a-(b * 2^i)  new a
        quotient += (1 << i);       // adding no of times we subtracted b
        }
    }
    //if the sign value computed earlier is -1 then negate the value of quotient
    if(sign==-1) quotient=-quotient;
    
    return quotient;  
}
int main(int argc, char const *argv[])
{
    long long int a,b;
    cin>>a>>b;
    std::cout << "a/b= "<<division(a,b) << std::endl;
    return 0;
}

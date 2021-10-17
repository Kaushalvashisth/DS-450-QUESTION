#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int a,b,l,r;     // eg:- a=44 b=50 l=5 r=2
    cin>>a>>b>>l>>r;

    bitset<8> x(a);  // 001 0110 0
    cout <<"A = "<< x << '\n';

    bitset<8> y(b);  // 001 1001 0
    cout <<"B = "<<y << '\n';

    int tempMask=1<<(l-r+1); //1<< 5-2+1  =>> 1<<4 --> 000 1000 0
    tempMask--;                              //tm--;=> 000 0111 1
    tempMask=tempMask<<(r-1);               //tm<<1 => 000 1111 0
    int mask=tempMask&a;                    //a  =>    001 0110 0
                                            //tm&a =>  000 0110 0 --> mask 
    b=b|mask;                               
    // b= 001 1001 0
 //mask=  000 0110 0
 //ans=   001 1111 0
    bitset<8> z(b);
    cout <<"ans="<<z << '\n';
    return 0;
}

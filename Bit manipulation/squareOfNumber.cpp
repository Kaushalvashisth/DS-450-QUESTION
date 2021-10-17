#include <bits/stdc++.h>
using namespace std;
int square(int n){
    if(n==0)return 0;
    if(n<0)n=-n;

    int x=n>>1;
    if (n&1)
    {
        return ((square(x)<<2) + (x<<2)+1);   // 0<<a is 0
    }else{
        return (square(x)<<2);
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    std::cout << "Square of "<<n<<" is :"<<square(n) << std::endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int isPalindrome(char s[])
{
    int l=0;
    int r=strlen(s)-1;
    while(l<=r){
        if(s[l]!=s[r])return 0;
        l++;r--;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char s[10]="abcgkgcba";
    (isPalindrome(s))?cout<<"true":cout<<"false";
    return 0;
}

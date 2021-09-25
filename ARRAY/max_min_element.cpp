#include <bits/stdc++.h>
using namespace std;
struct Pair
{
    int max;
    int min;
};
// return type of struct Pair in below function 
struct Pair getMinmax(int a[],int n){
    struct Pair mm;
    // if only 1 element
    if(n==1){
        mm.max=a[0];
        mm.min=a[0];
    }
    // multiple element
    else{
        if (a[0]>a[1])
        {
            mm.max=a[0];
            mm.min=a[1];
        }else{
            mm.max=a[1];   
            mm.min=a[0];   
        }
        
        for (size_t i = 2; i < n; i++)
        {
            if (a[i]>mm.max)
            {
                mm.max=a[i];
            }
            if (a[i]<mm.min)
            {
                mm.min=a[i];
            }
        }
    }
    return mm;
}
int main(){
    int a[]={90,-3939,999,7,2,45,0,11111};
    int n=sizeof(a)/sizeof(a[0]);
    struct Pair minmax=getMinmax(a,n);

    cout<<"Minimum element: "<<minmax.min<<"\n";
    cout<<"Maximum element: "<<minmax.max<<"\n";

    return 0;
}
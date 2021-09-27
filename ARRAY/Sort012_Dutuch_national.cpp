#include <bits/stdc++.h>
using namespace std;
// sorting 012 using dutuch national flag algo
    // array divided into 4 sections:
    // 1:a[0...low-1]----0's
    // 2:a[low...mid-1]---1's
    // 3:a[mid....high]---unknown if any
    // 4:a[high+1...n]---- 2's
// time=O(n)
void sort012(int a[],int n){
    int low=0,mid=0;
    int high=n-1;
    while (mid<=high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low],a[mid]);
            low++;mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid],a[high]);
            high--;
        }
    }
    
}
void printArray(int a[],int n){
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    
}
int main(int argc, const char** argv) {
    int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    sort012(a,n);
    printArray(a,n);
    return 0;
}
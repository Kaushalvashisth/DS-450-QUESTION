#include <bits/stdc++.h>
using namespace std;

// a max heap is made by defult in c++
// to make min heap add element with -ve sign
int kthLargest(int arr[],int k,int n){
    priority_queue <int> pq;
    for (size_t i = 0; i < k; i++)
    {
        pq.push(-arr[i]);
    }
    for (size_t i = k; i <n; i++)
    {
        if (-arr[i]<pq.top())
        {
            pq.pop();
            pq.push(-arr[i]);
        }
    }
    
    return -pq.top();
}

int main(int argc, const char** argv) {
    int a[]={20,10,60,30,50,40};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    cout<<kthLargest(a,k,n);
    return 0;
}
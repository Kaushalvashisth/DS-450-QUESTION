#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int start, int end){
    while (start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        // shortcut
        // swap(a[start],a[end]);
        start++;end--;
    }
}
void printArray(int a[],int size){
    for (size_t i = 0; i < size; i++)
    {
        cout << a[i]<<" ";
    }
    
}
int main(int argc, const char** argv) {

    int a[]={0, 1, 2, 3, 4, 8, 90};
    int n=sizeof(a)/sizeof(a[0]);
    std::cout << "\nOriginal array:-" << std::endl;
    printArray(a,n);

    reverseArray(a,0,n-1);

    std::cout << "\nReversed array:-" << std::endl;
    printArray(a,n);
    return 0;
}
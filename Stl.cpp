// #include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

// comparator function 
bool f(int x, int y){
    return x>y;
}
void vectorDemo(){
        vector<int> A={11,6,8,90};

    // cout<<A[1]<<endl;
    // merge sort
    sort(A.begin(),A.end());//O(NlogN)

    // 6,8,90,11
    bool present =binary_search(A.begin(),A.end(),6);// true 
    // cout<<present<<endl;// 1
    present=binary_search(A.begin(),A.end(),4);
    // cout<<present<<endl;// 0
    
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(300);

    cout<<"array is : "<<endl;
    for (int i = 0; i < A.size(); i++)
    {
        /* code */
        printf("%d ",A[i]);
    }
    printf("\n");

    vector<int>::iterator it =lower_bound(A.begin(),A.end(),100);//1st element strictly >= 
    // better way:-
    auto it2=upper_bound(A.begin(),A.end(),100);//1st element strictly greater than >

    // only done when array is sorted
    cout<<"lower bound: "<<*it<< " upper bound:"<< *it2<<endl;
    cout<<"number of 100s is "<< it2-it<<endl;//

    // sort in descending order
    sort(A.begin(),A.end(),f);

    // better printing 
    for(int &x:A){ //by refrence
        x++;
    }
    cout<<endl;

    for(int x:A){
        std::cout << x <<" ";
    }cout<<endl;
}

void setDemo(){
    set<int>S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    S.insert(1);// no repeatation

    for(int x:S)
        cout<< x <<" ";
    cout<<endl;

    // -10 -1 1 2
    auto it =S.find(-1);// returns S.end(); if element not found
    if(it==S.end()){
        std::cout << "not present" << std::endl;
    }else{
        std::cout <<*it<< " is present " << std::endl;
    }

    auto it2=S.upper_bound(-1); //first number >= -1
    auto it3=S.upper_bound(0);  //first number >= 0

    std::cout<< *it2 << " "<< *it3 << std::endl;

    auto it4=S.upper_bound(2); //return s S.end()=4 
    if(it4==S.end()){
        std::cout << "404 not found" << std::endl;
    }
}
void mapDemo(){
    map<int,int>A;
    A[1]=100;
    A[2]=-1;
    A[100003247]=1;
}
int main(){
    // c++ stl
    int n;
    cin>>n;
    // std::cout << n << std::endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];   
    }

    // reverse(a,a+n);
    for(int i=n-1;i>=0;i--){
        std::cout << a[i] << " ";
    }
}

// int n;
//      cin>>n;
//      vector<int>v;
     
//      for(int i=0;i<n;i++){
//          cin>>v[i];
//      }
//      sort(v.begin(),v.end());
//      for(int x:v){
//          cout<<x<<" ";
//      }
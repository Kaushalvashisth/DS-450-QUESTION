#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums) 
{
    // Code here.
    vector<int> result;
    int res=0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        res=res^nums[i];
    }
    // get right set bit
    int temp=res;//stores a
    int set_bit_no=res & (~res+1); //multiply by 2's compliment
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(nums[i]&set_bit_no)temp=temp^nums[i];
    }
    res=res^temp;//stores b
    if(res<temp){
        result.push_back(res);
        result.push_back(temp);  
    }else{
        result.push_back(temp); 
        result.push_back(res);   
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> v(2*n+2);
    for (size_t i = 0; i < 2*n+2; i++)
    {
        cin>>v[i];
    }
    vector <int> ans=singleNumber(v);
    for(auto i:ans){
        cout<< i<<" ";
    }
    return 0;
}

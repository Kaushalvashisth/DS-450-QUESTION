#include <bits/stdc++.h>
using namespace std;

// returns size of union of 2 arrays
int doUnion(int a[], int n, int b[], int m){
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
void doIntersection(int a[], int n, int b[], int m){
    set <int> s;
    for (size_t i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    cout<<"Intersection: ";
    for (size_t i = 0; i < m; i++)
    {
        if (s.find(b[i])!=s.end())
        {
            cout<<" "<<b[i];
        }
    }
}
int main(int argc, char const *argv[])
{
    int a[5] = { 1, 2, 3,4,5};
    int b[3] = { 1,2,3};
    std::cout << "Union length: " ;
    cout<< doUnion(a, 5, b, 3)<< std::endl;

    // std::cout << "Intersection:" << std::endl;
    doIntersection(a, 5, b, 3);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>var1{1,3,4,5,6,7};
    var1.pop_back();
    for(const int& i : var1)
    {
        cout<<i<<" ";
    }
    return 0;
}

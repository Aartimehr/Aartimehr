#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>var1{1,3,4,5,6,7};
    vector<int>::iterator iter;
    for(iter = var1.begin();iter != var1.end();++iter )
    {
    cout<<*iter<<" ";
    }
    return 0;
}

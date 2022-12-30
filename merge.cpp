#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>A)
{
    for(int i;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
}
void printvector2(vector<int>Aa)
{
    for(int j=0;j<Aa.size();j++)
    {
        cout<<Aa[j]<<" ";
    }
}
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int>newo(m+n);
         int j=0,i=0;
         while(j<=m or i<=n){
            if(nums1[i]>nums2[j]){
                newo.push_back(nums2[j]);
                 j++;
             }
           else {
                 newo.push_back(nums1[i]);
                i++;
            }
        }
        for(int i=m,j=0;i<m+n;i++,j++){
            nums1[i]=nums2[j];
            }
            sort(nums1.begin(),nums1.end()); 
        
}
int main()
{  
    vector<int>A = {6,1,2,3,4,6,1};
    vector<int>Aa = {2,3,4,1,4,7,8};
    cout<<"sorted"<<" ";
    merge(A,Aa,A.size());
    printvector(A);
    return 0;
}

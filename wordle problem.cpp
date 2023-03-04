#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      string S,N;
      cin>>S>>N;
      for(int i=0;i<S.length();i++)
      {
          if(S[i]==N[i])
          cout<<'G';
          else
          cout<<'B';
      }
     cout<<endl;
  }
	return 0;
}

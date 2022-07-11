#include <iostream>
using namespace std;
#include <algorithm>

int main() 
{
  int n,m;
  
 int x[4];
  int y[4];
  int z[4];
  cout<<"ENter the numer "<<endl;
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>x[i];
     }
  cin>>m;
    for(int l=0;l<m;++l){
    cin>>y[l];
     }
for(int c=0;c<4;++c){
  z[c] = x[c]-y[c];
  
  }
  int max = z[0];

  for(int p=0;p<4;++p){
    if(z[p]>max){
    max = z[p];

    }

  }
cout<<max<<endl;
return 0;
  }

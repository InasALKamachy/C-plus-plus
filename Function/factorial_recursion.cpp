#include <iostream>
using namespace std;

int r(int n);

int main(){
int n;

cout<<"Please Enter the number for factorial"<<endl;
cin>>n;
cout<<r(n)<<endl;
   return 0;
}

int r(int n){
if(n==0||n==1)
   return 1;
else{
return n*r(n-1);
}
}

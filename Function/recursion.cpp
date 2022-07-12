#include <iostream>
using namespace std;

int r(int n);
int main(){

int n;
cout<<"Please Enter the number for factorial"<<endl;
cin>>n;


r(n);
   return 0;

}

int r(int n){

if(n<1)
   return 0;

else{
cout<<"The round is : "<<n<<endl;
r(n-1);
}

}

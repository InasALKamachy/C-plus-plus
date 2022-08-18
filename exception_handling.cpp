//Exception Handling
#include<iostream>
#include <cstring>
using namespace std;

int main(){

int hour;
int A[5] = {1,2,3,4,7};
cin.exceptions(cin.failbit);
try{   //1
cin>>hour;
if(hour<0)
    throw "Error";  //2
if(hour >5)
    throw hour;
for(int i=0;i<6;i++)

    cout<<A[i]<<endl;
cout<<"your enter good"<<endl;

}
catch(const char*e){  //3
cerr<<e<<"Wrong value\n"<<endl;
}
catch(int n){
cout<<n<<"your index is out of length!";
}


return 0;
}

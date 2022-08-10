#include<iostream>
#include<cstring>
using namespace std;

class my_class{
int a,b;
public:
my_class(){
  cout<<"EMPTY"<<endl;
}
my_class(int x, int y){
  cout<<"PARAMATERIZE \n";
  a = x;
  b = y;
}
friend int sum(my_class ob);
~my_class(){
  cout<<"DECONSTRUCTURE!! \n";
}
};
int sum(my_class ob){
  return ob.a+ob.b;
}
int main(){
 
my_class ob(10,20);
  cout<<sum(ob)<<endl;
  
}


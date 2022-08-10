#include<iostream>
#include<cstring>
using namespace std;
class my_class1;
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
friend int sum(my_class1 ob1,my_class ob);

};//end of class1
class my_class1{
int a,b;
public:
my_class1(int x, int y){
  cout<<"PARAMATERIZE \n";
  a = x;
  b = y;
}
friend int sum(my_class1 ob1,my_class ob);
};
int sum(my_class1 ob1, my_class ob){
  return ob1.a + ob.a;
}
int main(){
 
my_class ob(10,20);
my_class1 ob1(20,22);
  cout<<sum(ob1,ob)<<endl;
  
}


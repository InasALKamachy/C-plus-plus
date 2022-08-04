#include <iostream>
#include<cstring>
using namespace std;



int main(){

int *p1;
int *p2;
p1= new int;
p2 = new int;
*p1 = 10;
*p2 = 20;
cout<<p1<<"GIVE address of memory "<<endl;
cout<<*p1<<"GIve the absolute value"<<endl;
cout<<&p1<<"GIve the address of pointer "<<endl;
delete p2;
delete p1;
cout<<*p1<<endl;
system("pause");
}

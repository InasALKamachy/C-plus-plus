#include<iostream>
#include<string>
using namespace std;

enum day{san=1,mon,tus,wed,ther,fri,sat};
string week[7]={"san","mon","tus","wed","ther","fri","sat"};

class dd{
private:
day d1[7];

public:

void set_my(day w[7]){
  
  for(int i=0;i<7;i++)
    d1[i] = w[i];
  }
void print(){
  for(int i=0;i<7;i++){
    cout<<d1[i]<<" - "<<week[i]<<endl;
  }
}

};
int main(){
  day my_day[7] = {san,mon,tus,wed,ther,fri,sat};
 dd ob1;
  ob1.set_my(my_day);
  ob1.print();
 
}

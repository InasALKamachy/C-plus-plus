
#include <iostream>
#include<cstring>
using namespace std;
class car{
private:
char name[15];
char color[10];
int maxspeed;
int model;

public:
void setName(char n[]){
  strcpy(name,n);
}
void setColor(char c[]){
  strcpy(color,c);
}
void setMaxspeed(int s){
   maxspeed = s;
}
void setModel(int m){
  model = m;
}
char *getName(){
  return name;
}
char *getColor(){
  return color;
}
int getMaxspeed(){
  return maxspeed;
}
int getModel(){
  return model;
}
void print(){
  cout<<"My Car Name is:"<<name<<endl;
  cout<<"My Car Color is: "<<color<<endl;
  cout<<"My Car Speed is: "<<maxspeed<<endl;
  cout<<"My Car Model is:"<<model<<endl;
      
}

};
int main()
{
   car myCar;
  myCar.setName("BMW");
  myCar.setColor("White");
  myCar.setMaxspeed(1500);
  myCar.setModel(1982);
  myCar.getColor();
  myCar.print();
  
  
  
  
   
    return 0;
}

//class in c++

#include<iostream>
#include<cstring>
using namespace std;

class Car{
private:
char name[15];
char color[10];
float Maxspeed;
int Model;

public:
void setName(char n[]){
  strcpy(name, n);
  }
void setColor(char c[]){
  strcpy(color, c);
}
void setMaxspeed(float m){
  Maxspeed = m;
}
void setModel(int mo){
  Model = mo;
}
char* getName(){
  return name;
}
char* getColor(){
  return color;
}
float getMaxspeed(){
  return Maxspeed;
}
int getModel(){
  return Model;
}

void print(){
  cout<<"My Car is :"<<name<<" "<<"has the color of "<<color<<" "<<"with speed about"<<Maxspeed<<" and Model in"<<" "<<Model<<endl;
}
};
class Rectangle{
private:
int height;
int base;
float area;

public:
void set_height(float h){
  height = h;
}
float get_height(){
  return height;
}
void set_base(float b){
  base = b;
}
float get_base(){
  return base;
}
float My_area(){
  area =0.5*height*base;
  return area;
}
void print(){
  cout<<"The area is: "<<area;
}
};
int main()
{
Car My_Car;
My_Car.setName("BMW");
My_Car.setColor("White");
My_Car.setMaxspeed(1500);
My_Car.setModel(1982);
My_Car.print();

Rectangle My_Rectangle;
  My_Rectangle.set_height(11.5);
  My_Rectangle.set_base(2.5);
  My_Rectangle.print();

  return 0;
}

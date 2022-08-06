#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Rec{
private:
int *width;
int *height;

public:
Rec();
Rec(int, int);
int area();

~Rec();

};
Rec::Rec(int a, int b){
  width = new int;
  height = new int;
  *width = a;
  *height = b;
  
}
Rec::Rec(){
  cout<<"The Area is:"<<endl;
}
int Rec::area(){
  return *width * *height;
}
Rec::~Rec(){
  delete width;
  delete height;
  cout<<"\nThe pointer is deleted!!"<<endl;
}
int main()
{
  int ptr1;
  int ptr2;

  Rec my1_rec;
  Rec my_rec(50,44);
  cout<<my_rec.area();
    return 0;
}

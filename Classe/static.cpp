#include<iostream>
#include<cstring>
using namespace std;



class car{
private:
static int count;
char name[15];

public:

car(){
  cout<<"empty consturcture"<<endl;
  strcpy(name,"no name");
  count++;
  cout<<name<<" : "<<count<<endl;
  
  }
void print(){
  cout<<name<<" : "<<count<<endl;
  }

~car(){
  cout<<"DECONSTRUCTURE!!"<<endl;
}
};
int car::count = 0;

int main(){

car d1,d2,d3,d4,d5;
  
 
 return 0;
}

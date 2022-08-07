#include<iostream>
#include<cstring>
using namespace std;
class student{
private:
char name[10];
int id;
public:
student(){
  cout<<"EMPTY\n";
  strcpy(name,"NO NAME");
  id = 0;
}
student(char n[], int i){
  cout<<"PARAMATRIZE"<<endl;
  strcpy(name,n);
  id = i;
  
}
void print (void){
  cout<<name<<": "<<id<<endl;
}
~student(){
  cout<<"DEstroy"<<endl;
}
};
int main(){
  
  student ar[3] = {student("hel",525)};
  for(int i=0;i<3;i++){
    ar[i].print();
  }
  student s1("enas",522),s2("aseel",557);
  s1.print();
  s2.print();

	return 0;
}

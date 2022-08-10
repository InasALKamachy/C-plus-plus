#include<iostream>
#include<cstring>
using namespace std;

enum day{san=1,mon,tus,wend,thers,frid,sat};

class student{
private:
char name[15];
int id;
public:
student(){
  cout<<"HERE IS EMPTY CONSTRUCTURE!!\n";
  strcpy(name,"no name");
  id = 0;
}
student(char n[],int i){
  cout<<"HERE IS PARAMETERIZE CONSTRUCTURE!!\n";
  strcpy(name,n);
  id = i;
}
void print(void){
  cout<<"The name of student is:"<<name<<"\n";
  cout<<"The id is"<<id<<endl;
}
~student(){
  cout<<"THIS IS THE DECONSTRUCTURE! \n";
}
};
int main(){
  day d1[7] = {san,mon,tus,wend,thers,frid,sat};
  
  string arr[7] = {"san","tus","wed"};
  for (int i = 0;i<7;i++){
    cout<<d1[i]<<" **"<<arr[i]<<endl;
  }

  }



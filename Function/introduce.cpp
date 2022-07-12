#include <iostream>
using namespace std;

void introduce(string name, string city, int age);
int main()
{
   string name, city;
   int age;
   cout<<"Enter your name:"<<endl;
   cin>>name;
   cout<<"Enter your City"<<endl;
   cin>>city;
   cout<<"Enter your Age: "<<endl;
   cin>>age;
   introduce(name,city,age);
   system("pause>0");
   }


void introduce(string name, string city, int age){
 if(age>30){
    cout<<"Hello My name is:"<<name<<endl;
    cout<<"My City is:"<<city<<endl;
    cout<<"I'm adult"<<endl;}
 else{
    cout<<"I'm baby"<<endl;
 }
     }

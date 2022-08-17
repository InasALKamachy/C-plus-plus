//Inheritance::
//access types in c++ : private , protected , public
// father class : Base , child class relative;
#include<iostream>
#include <cstring>
using namespace std;

class name{
private:
    char my_name[15];
protected:
            name(){
    cout<<"HELLO FROM THE NAME CLASS\n";
    strcpy(my_name, "no name");
    }
    name(char nn[]){
    cout<<"HELLOW FROM PARAMATRIZE CONSTURCTURE\n";
    }

    void set_name(char n[])
                   {
                   strcpy(my_name, n);
                   }
    void get_name()
                   {
                   cout<<"The name of student is:"<<my_name<<endl;
                   }



};
class Id{
private:
    int id;
protected:

    void set_id(int i){
    id = i;
    }
    void get_id(){
    cout<<"The id of student is:"<<id<<endl;
    }
public:
        Id(){
            id = 0;
    cout<<"HELLO FROM ID CLASS\n";
    }
};
class student:public name,public Id{

public:

    void student_1(char na[], int id1=0){
    set_name(na);
    set_id(id1);
    }
    void show(){

    get_id();
    get_name();
    }
};

int main(){

student object;
object.show();




}

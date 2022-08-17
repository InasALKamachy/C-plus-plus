//Inheritance::
//access types in c++ : private , protected , public
// father class : Base , child class relative;
#include<iostream>
#include <cstring>
using namespace std;

class poly{
protected:
    int width, height;
public:
    poly(){

    cout<<"Hello From Base Class poly"<<endl;
    }
    virtual  area(){
    return(0);
    }
    void set_value(int a, int b){
    width = a;
    height = b;
    }
};
class trangle:public poly{
public:
    trangle(){

    cout<<"Hello From trangle"<<endl;
    }
    int area(){
    return width*height;
    }
};
class circle:public poly{
    public:
    circle(){

    cout<<"Hello From Base Class Circle"<<endl;
    }
int area(){
return width*height/2;
}
};
int main(){

circle c1;
trangle t1;
poly *p1, *p2;
p1 = &c1;
p2 = &t1;
p1->set_value(20,30);
p2->set_value(33,49);
cout<<p1->area()<<endl;
cout<<p2->area()<<endl;
//c1.area_circle();
//t1.area_t();

system("pause>0");
}

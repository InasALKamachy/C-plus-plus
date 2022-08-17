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
    void area_t(){
    cout<<width*height<<endl;
    }
};
class circle:public poly{
    public:
    circle(){

    cout<<"Hello From Base Class Circle"<<endl;
    }
void area_circle(){
cout<<width*height/2<<endl;
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
c1.area_circle();
t1.area_t();

system("pause>0");
}

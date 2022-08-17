//Inheritance::
//access types in c++ : private , protected , public
// father class : Base , child class relative;
#include<iostream>
#include <cstring>
using namespace std;
template<class t1, class t2>

t1 sum(t1 x, t2 y){
return x+y;
}
template<class t>
class inn{
public:
    inn(t x){
    cout<<x<<"is number"<<endl;
    }
};
template<> //Template Specialization

class inn<char>{
public:
    inn(char x){
    cout<<x<<"is character"<<endl;
    }
};
int main(){
inn<char> my_mu('A');
inn<int> dd(55);


system("pause>0");
}

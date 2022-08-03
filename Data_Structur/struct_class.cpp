#include <iostream>
#include<cstring>
using namespace std;

struct student{
float first,second,final;
};

class degree{
private:
    char name[15];
    student st;
public:
    degree(){
    strcpy_s(name,"no name");
    st={0,0,0};
    }
    degree(char n[],float fi,float se,float fa){
    strcpy_s(name,n);
    st.first = fi;
    st.second = se;
    st.final = fa;
    }

    float cal(){
    return st.first+st.second+st.final;
    }

    void print(){
    cout<<cal()<<endl;
    }
~degree(){
cout<<"FINISH"<<endl;
}

};

int main(){
degree d1("eneeas",20.3,45,543);
d1.print();

}

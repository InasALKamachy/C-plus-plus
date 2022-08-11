#include<iostream>
#include<cstring>
using namespace std;

class traingle{
    private:
    int width, height;
    public:
    traingle(){
        cout<<"Empty"<<endl;
    }
    traingle(int w, int he){
        cout<<"Paramatrize"<<endl;
        width = w;
        height = he;
        
    }
    void print(){
        cout<<width<<" "<<height<<endl;
    }
    void sum(traingle d1, traingle d2){
        cout<<d1.width+d2.width<<endl;
        cout<<d1.height+d2.height<<endl;
    }
    
    ~traingle(){
        cout<<"De-Constructore"<<endl;
    }
};
int main(){
    traingle ob(20,22),ob1(30,33),ob2;
    ob2.sum(ob,ob1);
    
    return 0;
}

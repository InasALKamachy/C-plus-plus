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
    traingle operator+(traingle d2){
      traingle d;
      d.height = height +d2.height;
      d.width = width+d2.width;
       return d;
      
    }
    
    ~traingle(){
        cout<<"De-Constructore"<<endl;
    }
};
int main(){
    traingle ob(20,22),ob1(30,33),ob2;
    ob2 = ob+ob1;
    ob2.print();
    return 0;
}

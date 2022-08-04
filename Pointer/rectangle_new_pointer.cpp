#include <iostream>
#include<cstring>
using namespace std;

class Rectangle{
private:
   int *width, *height;

public:
    Rectangle();

    Rectangle(int a, int b);
    int area(){
    return *width * *height;}

    ~Rectangle();
};

Rectangle::Rectangle(int a, int b){
    height = new int;
    width = new int;
    *height = a;
    *width = b;
    }
    Rectangle::~Rectangle(){
    cout<<"The rectangle is deleted\n";
    delete height;
    delete width;
    }


int main(){

int x = 5;
int y = 10;

Rectangle R1(x,y);
cout<<R1.area()<<endl;


system("pause");
}

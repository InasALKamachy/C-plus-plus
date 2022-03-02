#include<iostream>
using namespace std;

class Rectangle {
public:

    //define the properties


    // define the method
    int area();
   
    Rectangle(int width, int height);
    ~Rectangle();
private:
    int height;
    int width;
};
//define the implementation
int Rectangle::area() {
    int area = this->height * this->width;
    return area;
}

Rectangle::Rectangle(int a, int b) {
    this->height = a;
    this->width = b;
    cout << "Hello this is the constructor helre" << endl;
    
}
Rectangle::~Rectangle() {
    cout << "Hello this is the de constructure here" << endl;
}


int main() {
    { 

    Rectangle R1(80,22);
   
    cout << R1.area() << endl;


    Rectangle R2(55, 10);
   
    cout << R2.area() << endl;
    }
    system("pause");
    return 0;
}

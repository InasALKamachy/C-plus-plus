#include<iostream>
using namespace std;

class Rectangle {
public:

    //define the properties
    int height;
    int width;

    // define the method
    int area();
    void setval(int width, int height);
    Rectangle();
    ~Rectangle();
};
//define the implementation
int Rectangle::area() {
    int area = this->height * this->width;
    return area;
}
void Rectangle::setval(int a, int b) {
    this->height = a;
    this->width = b;
}
Rectangle::Rectangle() {
    cout << "Hello this is the constructor helre" << endl;
    
}
Rectangle::~Rectangle() {
    cout << "Hello this is the de constructure here" << endl;
}


int main() {
    int hieght_ = 80;
    int width_ = 50;

    Rectangle R1;
    R1.setval(80, 50);
    cout << R1.area() << endl;
    return 0;
}

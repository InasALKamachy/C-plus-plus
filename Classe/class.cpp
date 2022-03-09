//properties
//method
//implmentation

#include<iostream>
#include<string>
using namespace std;

class Car {
  public:
    string brand;   
    string model;
    int year;
    void type(Car d);
};
void Car::type(Car d){
         cout << d.brand << " " << d.model << " " << d.year <<endl;
    }
int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  carObj1.type(carObj1);
  carObj2.type(carObj2);
  return 0;
}

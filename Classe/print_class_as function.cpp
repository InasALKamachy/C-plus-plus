#include<iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;
    
    void printday(Date myday){
        cout<<myday.day<<endl;
    }
    
};


int main(){
    
    Date my_day;
    my_day.day = 9;
    my_day.month = 8;
    my_day.year = 1982;
    cout<<my_day.day<<endl;
    my_day.printday(my_day);
    return 0;
}

/////////////////////////

#include<iostream>
#include<string>
using namespace std;

class Car {
  public:
    string brand;   
    string model;
    int year;
    void type(Car d){
         cout << d.brand << " " << d.model << " " << d.year <<endl;
    }
};

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

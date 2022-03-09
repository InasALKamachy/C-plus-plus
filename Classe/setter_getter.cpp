#include <iostream>
#include<string>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;
    string name;
  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    void setName(string n){
        name = n;
    }
    // Getter
    int getSalary() {
      return salary;
    }
    string getName(){
        return name;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  myObj.setName("Enas");
  cout<<myObj.getName();
  return 0;
}

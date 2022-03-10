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
////////////////////////////
#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int h,int m, int s){
            hour = h;
            minute = m;
            second = s;
                    }
        void print(){
            cout<<hour<<"/"<<minute<<"/"<<second<<endl;
        }
        void setHour(int h){
            hour = h;
        }
        int getHour(){
            return hour;
        }
};
int main(){
    Time t1(2,3,55);
    t1.print();
    t1.setHour(5);
    t1.print();
}

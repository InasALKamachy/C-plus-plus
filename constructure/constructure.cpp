#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class student {
private:
  int a,b,c,d,e,f,g;
	char name[20];
	int id;
public:
  student(int a1,int b1, int c1, int d1, int e1, int f1, int g1){
      cout<<"Hello from copy1 consturcture;"<<endl;

    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
    f = f1;
    g = g1;
    
  }
//copy constructure
student(const student&obs){
  cout<<"Hello from copy consturcture;"<<endl;
  a = obs.a; // make shortcup to the arrgument;
  b = obs.b;
  c = obs.c;
  d = obs.d;
  e = obs.e;
  f = obs.f;
  g = obs.g;
  
}
	student() {
		cout << "HELLO TO THE SCHOOL FROM EMPTY!!" << endl;
		strcpy(name, "Default");
		id = 402205535;
	}
	student(char n[], int i=12544) {
		cout << "HEEELO FROM THE PRAMATERIZED CONSTRUCTURE!!" << endl;
		strcpy(name, n);
		id = i;
	}
	void print() {
		cout << name << ", " << id << endl;
	}
};

int main() {
	student ob1, ob2("ed");
  student ob3(1,2,3,4,5,6,7);
  student ob4(ob3);
  ob4.print();
  
	ob1.print();
	ob2.print();


	
}

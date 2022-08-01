#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class phone {
private:
	char name[15];
	char model[10];
	int price;

public:
	phone() {
		cout << "Hello From empty consturcture" << endl;
		strcpy(name, "NULL");
		strcpy(model, "MODEL NULL");
		price = 0.00;
	}
	phone(char n[], char m[], int p) {
		cout << "Hello from paramaterize consturcture" << endl;
		strcpy(name, n);
		strcpy(model, m);
		price = p;

	}
	void print();
	
	~phone(); 
};
void phone::print(){
   
		cout << "The name of your car is :" << name << "The model " << model << "The price " << price << endl;
}
phone::~phone(){
		cout << "HEllo from De-Constructure!!" << endl;
	}
void Pdr(phone s){
  cout<<"Hello from function"<<endl;
  phone s1;
  s1 = s;
  s.print();
  s1.print();
}
int main() {

	phone ob;
  Pdr(ob);
	phone ob1("name", "model", 20.00);
  Pdr(ob1);
	ob.print();
	return 0;
/*
"Hello From empty consturcture"د
"Hello from function"
"Hello From empty consturcture"د
"The name of your car is :" NULL
"The name of your car is :" NULL
"HEllo from De-Constructure!!"
"HEllo from De-Constructure!!"
"Hello from paramaterize consturcture"
"Hello from function"
"Hello From empty consturcture"د
"The name of your car is :" nameL
"The name of your car is :" name
"HEllo from De-Constructure!!"
"HEllo from De-Constructure!!"
"The name of your car is :"NULL
"HEllo from De-Constructure!!" 
"HEllo from De-Constructure!!" 


  */


}

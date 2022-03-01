#include<iostream>
using namespace std;


int main(){

	int y = 5;
	int& p = y;
	cout << y <<"\t"<<sizeof(y) << endl;
	cout << p <<sizeof(p)<< endl;
	int x = 7;
	


	system("pause");
	return 0;
}
*****************************************
#include<iostream>
using namespace std;

void cllre(int &x) {
	x += 1;
}

int main(){
	int x = 5;
	cllre(x);
	cout << x << endl;
	system("pause");
	return 0;
}


******************************************************

//with or without refrences::

#include<iostream>
using namespace std;

void sum(int &x) {
    
    x +=1;
    cout<<"\tlocation of function"<<&x<<endl;
}
int main() {
	
	int x=20;

sum(x);
cout<<x<<"\tlocation of main"<<&x<<endl;

	return 0;
}

#include <iostream>
using namespace std;
#include<cstdlib>

int cal(int* ptr) {
	//++*ptr;
	*ptr += 1;
	return *ptr;
}
int main()
{
	void* ptr;
	float y = 10.5;
	ptr = &y;
	float* i = static_cast<float*>(ptr);
	cout << *i << endl;

	void* dptr;
	double z = 10.20;
	dptr = &z;
	y = *(static_cast<double*>(dptr));
	cout << y << endl;
	
	int x = 5;
	int* p = &x;
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	cout << x << endl;
	cout << cal(p) << endl;
	cout << x << endl;
	return 0;
}








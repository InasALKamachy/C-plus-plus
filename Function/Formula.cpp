#include<iostream>
#include<cmath>
using namespace std;

double Formula1(int m, int n);
double Formula2(double x);
int main() {

	int m, n;
	double x;
	cout << "Enter value as m value: " << endl;
	cin >> m;
	cout << "Enter value as n value: " << endl;
	cin >> n;
	cout << "Enter value as x value: " << endl;
	cin >> x;
	cout << Formula1(m, n) * Formula2(x) << endl;
	
	cin.get();
}

double Formula1(int m, int n) {
	double y(0);
	while (n > 0) {
		y += n; n--;
	};
	y += m;
	return y;
}

double Formula2(double x) {
	double y(0);
	y = (x / pow(x, 2) + x * sqrt(x));
	return y;
}

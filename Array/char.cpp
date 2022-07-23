#include <iostream>
using namespace std;
#include<cstring>
#include<cstdlib>


int main()
{
	char arr0[] = "Enatts";
	char arr[] = "ttdddddddddddddvvvA";
	char arr1[5];

	strcpy(arr1, arr);
	cout << strcmp(arr0, arr) << endl;
	cout << strlen(arr) << endl;
	cout << strcat(arr0, arr) << endl;

	
	cout << arr1 << endl;
	

	return 0;
}








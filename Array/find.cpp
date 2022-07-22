
#include <iostream>
using namespace std;

	
int main()
{
int i;
 const int s = 5;
 int arr[5]={100,32,44,554,321};
 bool finder = false;
 int element;
 cout<<"Enter your elemenet : "<<endl;
 cin>>element;
 
 for (i=0;i<s;i++)
     if (element ==arr[i]) {
         
         finder = true;
         break;}
 
 if(finder)
 cout<<"Your element index is "<<element<<" "<<i<<endl;
 else cout<<"YOUR element not found"<<endl;
	return 0;
}


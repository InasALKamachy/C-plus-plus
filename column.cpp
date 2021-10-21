/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
cout<<"Ints";
cout<<setw(10)<<"Floats";
cout<<setw(10)<<"Doubles"<<endl;

cout<<a;
cout<<setw(10)<<b;
cout<<setw(10)<<c<<endl;


cout<<aa;
cout<<setw(10)<<bb;
cout<<setw(10)<<cc<<endl;

cout<<aaa;
cout<<setw(10)<<bbb;
cout<<setw(10)<<ccc<<endl;
    
    
    //*******************************
        
        //or
 cout<<"Integer"<<"\t"<< "Float"<<"\t"<< "Double" <<"\n";
 cout<<a<<"\t"<<b<<"\t"<<c <<"\n";
 cout<<aa<<"\t"<<bb<<"\t"<<cc <<"\n";
 cout<<aaa<<"\t"<<bbb<<"\t"<<ccc <<"\n";

    


    return 0;
}

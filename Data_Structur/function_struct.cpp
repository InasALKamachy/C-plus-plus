#include <iostream>
#include<string>
#include<cstring>
using namespace std;

struct Distance{
int feet;
float inches;

};

Distance my_fucntion(Distance d1, Distance d2){
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches+ d2.inches;
    return result;

}
int main()
{
    Distance x,y,z;
    cout<<"Enter x feet and y feet\n";
    cin>>x.feet>>y.feet;
    cin>>x.inches>>y.inches;
    z = my_fucntion(x,y);
    cout<<z.feet<<""<<z.inches<<endl;
    system("pause");
}

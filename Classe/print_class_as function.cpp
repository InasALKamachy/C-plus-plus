#include<iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;
    
    void printday(Date myday){
        cout<<myday.day<<endl;
    }
    
};


int main(){
    
    Date my_day;
    my_day.day = 9;
    my_day.month = 8;
    my_day.year = 1982;
    cout<<my_day.day<<endl;
    my_day.printday(my_day);
    return 0;
}

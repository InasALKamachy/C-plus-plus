#include<iostream>
using namespace std;

int main(){
  int small, large;
  
  float Cost = 0;
  cout<<"Estimate for carpet cleaning service \n";
  cout<<"Number of small rooms:\n";
  cin>>small;
  cout<<"Number of larg rooms:\n";
  cin>>large;
  cout<<"Price per small room: $25\n";
  cout<<"Price per larg room: $35\n";
  Cost = small*25+large*35;
  cout<<"Cost:"<<"$"<<Cost<<endl;
  float tax = Cost*0.06;
  cout<<"Tax:"<<"$"<<tax<<endl;
  cout<<"===================================\n";
  cout<<"Total estimate:"<<"$"<<tax+Cost<<endl;
  
}

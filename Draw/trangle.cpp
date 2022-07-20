/*
   *
  ***
 *****
 

*/
/**
*    5 row
**
***
****
*****  5 column 
/////////////////
    *
   ****
  ******
 ********
**********


*****
****
***
**
*

////*/

#include <iostream>
using namespace std;

int main() {
    int e=1;
    for(int i=1;i<=5;i++){  //rows  
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
        for(int k=0;k<e;k++){
            cout<<"*";
        }
       
        cout<<endl;
        e+=2;
    }
   
    
	return 0;
}

/////////////////

#include <iostream>
using namespace std;

int main() {
    int e=1;
    for(int i=1;i<=5;i++){  //rows  
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
     
       
        cout<<endl;
      
	    
	    
	    /////////////////////
	    
	    
#include <iostream>
using namespace std;

int main() {
    int e=1;
    for(int i=1;i<=5;i++){  //rows  
    
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
     
       
        cout<<endl;
      
    }
   
       
   
    
    
	return 0;
}

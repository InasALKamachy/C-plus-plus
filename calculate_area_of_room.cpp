/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 
 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string width;
   std::string length;
   float w_inches = 0;
   float l_inches = 0;
   float room_area = 0;

   std::cout << "Enter the width of the room: ";
   std::getline (std::cin,width);
   std::stringstream(width) >> w_inches;
   std::cout<<"You entered "<<w_inches<<"\n";
   
   std::cout << "Enter the length of the room: ";
   std::getline (std::cin,length);
   std::stringstream(length) >> l_inches;
   std::cout<<"You entered "<<l_inches<<"\n";
   
   room_area = w_inches * l_inches;
   std::cout << room_area;
   return 0;
 }

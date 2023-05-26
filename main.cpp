#include <iostream>
#include "student.h"

using namespace std;

int main(int argc, char* argv[]) {
  student s1,s2, s3;
  student a[10];
  s1.set_name("Pun");
	s2.set_name("Joe");
  
  s1.set_age(20);
  s2.set_age(17);
  
  if(s1.get_age() > s2.get_age() ){
    s1.print_name();
    cout  << " is older.";
  }
    
  else{
    s2.print_name();
    cout <<  " is older.";
  }
} 
  
  



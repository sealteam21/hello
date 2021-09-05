#include <unistd.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (void) {

  char name[128];
  const int nameLength = 128;
  int returnName;
  
  returnName = gethostname(name, nameLength);
  
  cout << "The name of the current machine is " << name << "\n";
   
  return 0;
  

}



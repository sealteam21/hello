#include <unistd.h>
#include <iostream>

using namespace std;

int main() {

  int variable = 128;
  char array[128];
 auto result = gethostname(array, variable);
  cout << string(array);
  return 0;
}




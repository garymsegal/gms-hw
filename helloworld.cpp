// Some test code for git pull-request analysis.

#include <iostream>
using namespace std;

extern int print_something(char *p);
extern int print_somethingelse(int count);


int main ()
{
  int count;
  
  char *message = "A passed string pointer.\n";
  
  cout << "This is some text.  Changed on Github.\n";
  print_something (message);
  
  for (count=1; count<=5; count++)
	print_somethingelse (count);
  return 0;
}

// Some test code for git pull-request analysis.

#include <iostream>
using namespace std;

extern int print_something();

int main ()
{
  cout << "This is some text.  Changed on Github.\n";
  print_something ();
  return 0;
}

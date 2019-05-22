// Some more test code for git pull-request analysis.
#include <stdio.h>
#include <iostream>
using namespace std;

int print_something ()
{
  char *p;	// A pointer.
  
  printf ("%s\n", p);

  cout << "Printing something else changed locally.\n";
  cout << "Here's another local change.\n";
  cout << "A local change for a git push.\n";
  cout << "A local change git pull request.\n";
  cout << "Adding something to feature1 branch.\n";
  return 0;
}

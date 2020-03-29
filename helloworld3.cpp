// Some more test code for git pull-request analysis.
#include <stdio.h>
#include <iostream>
using namespace std;

int print_somethingelse (int count)
{
  int i=0;
  int sum=0;
  
  for (i=0; i<=count; i++)
	  sum += i;

  cout << "Count:" << count << " sum:" << sum << endl;
  return 0;
}

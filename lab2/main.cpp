#include "Bigfoot.h"
#include <iostream>
using namespace std;

int main()
{
  Bigfoot b1, b2;

  cout << "Enter information about the first bigfoot:\n";
  cin >> b1;
  cout << "Enter information about the second bigfoot:\n";
  cin >> b2;

  cout << b1 << '\n';
  cout << b2 << '\n';

  if(b1 >= b2)
    cout << "The first Bigfoot is greater\n";
  else
    cout << "The second Bigfoot is greater\n";

  return EXIT_SUCCESS;
}
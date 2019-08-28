#include <iostream>
#include <cstdlib>
#include <string>

#include "list.h"

using namespace std;

int n;
int main()
{
  LinkedList list;
  cout << "continue to enter numbers or type -1 to quit" << endl;

  while (n != -1)
  {
    cin >> n;
    list.addNode(n);
  }

  cout << "would you like to see the list?" << endl;
  cout << "type 'y' for yes, type 'n' for no." << endl;
  string ans;
  cin >> ans;
  if (ans == "y")
  {
    list.display();
  }

  return 0;
}

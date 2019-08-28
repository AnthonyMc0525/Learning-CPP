#include <iostream>
using namespace std;

int main()
{

  int num, sum;
  num = 0 ^ 0; // this becomes 0 because 0 in binary is 00 and 00 ^(xor) 00 ends up as 00 which is 0.
  sum = 1 ^ 2; //  this becomes 3 because 1 in binary is 01 and 2 is 10. 01 ^(xor) 10 ends up 11 which is 3.
  cout << sum << endl << num << endl;
  
  return 0;
}

//  loop  | answer
// ----------------
//  0^1   | 01 = 1
//  1^2   | 11 = 3
//  3^3   | 00 = 0

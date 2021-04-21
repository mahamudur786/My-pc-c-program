#include <iostream>
using namespace std;

int main() {
  // true = 1:
  bool p = true;
  if(p == 1)
    cout << "'p' is true." << endl;
  
  // false = 0:
  bool q = false;
  if(q == 0)
    cout << "'q' is false." << endl;
  
  // Every value other than 0 is stored as 1:
  bool r = -5;
  if(r == 1 && r == true)
    cout << "-5 is stored as 1 in 'r' and it is true." << endl;

  // 0 is stored as it is:
  bool t = 0;
  if(!t)
    cout << "'t' is false." << endl;

  return 0;
}

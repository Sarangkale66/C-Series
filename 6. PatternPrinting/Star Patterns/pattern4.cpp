#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *

int main()
{
  int num = 0;
  cout << "enter your value" << endl;
  cin >> num;

  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
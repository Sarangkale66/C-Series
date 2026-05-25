#include <iostream>
using namespace std;

// *******
//  ******
//   *****
//    ****
//     ***
//      **
//       *

int main()
{
  int num = 0;
  cout << "enter the value" << endl;
  cin >> num;

  for (int i = 0; i < num; i++)
  {
    // space
    for (int k = 0; k < i; k++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < num - i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}
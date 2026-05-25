#include <iostream>
using namespace std;

// ******
// ******
// ******
// ******
// ******
// ******

int main()
{
  int num = 0;
  cout << "enter value" << endl;
  cin >> num;

  // 0 -> num
  for (int j = 0; j < num; j++)
  {
    // 0 -> num
    for (int i = 0; i < num; i++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
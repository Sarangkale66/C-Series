#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "enter your symbol" << endl;
  cin >> ch;

  switch (ch)
  {
  case 'a':
    cout << "My character is a" << endl;
    break;
  case 'b':
    cout << "My charater is b" << endl;
    break;
  default:
    cout << "unknown character";
  }

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int num = 0;
  cout << "enter your number" << endl;
  cin >> num;

  if (num % 2 == 0)
  {
    cout << "even";
  }
  else
  {
    cout << "odd";
  }

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int age = 0;
  cout << "enter you age" << endl;
  cin >> age;

  if (age >= 18)
  {
    cout << "eligible";
  }
  else
  {
    cout << "Not eligible";
  }

  return 0;
}
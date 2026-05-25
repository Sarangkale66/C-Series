#include <iostream>
using namespace std;

int main()
{
  int num = 0, count = 0;

  cout << "enter your number" << endl;
  cin >> num; // 1234

  while (num != 0)
  {
    num = num / 10;
    count++;
  }

  cout << "number of digits: " << count << endl;
  return 0;
}
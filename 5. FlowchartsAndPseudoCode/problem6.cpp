#include <iostream>
using namespace std;

int main()
{
  int num = 0, rev_num = 0;
  cout << "enter your number" << endl;
  cin >> num;

  while (num != 0)
  {
    // extract last digit
    int temp = num % 10;
    // remove last digit
    num = num / 10;
    // Assemble
    rev_num = rev_num * 10 + temp;
  }

  cout << "ans: " << rev_num;

  return 0;
}
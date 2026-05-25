#include <iostream>
using namespace std;

int main()
{
  int num = 0, ans = 1;
  cout << "enter your value" << endl;
  cin >> num;

  for (int i = num; i >= 1; i--)
  {
    ans = ans * i;
  }

  cout << "ans: " << ans;

  return 0;
}
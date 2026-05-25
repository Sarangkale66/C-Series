#include <iostream>
using namespace std;

int main()
{
  int num = 0;
  int count = 1;
  cout << "enter value" << endl;
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      // cout << i;
      // cout << j;
      cout << count;
      count++;
    }
    cout << endl;
  }

  return 0;
}
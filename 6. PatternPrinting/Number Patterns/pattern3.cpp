#include <iostream>
using namespace std;

int main()
{
  int num = 0;
  cout << "enter value";
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= num - i + 1; j++)
    {
      cout << num - i + 1;
    }
    cout << endl;
  }
  return 0;
}
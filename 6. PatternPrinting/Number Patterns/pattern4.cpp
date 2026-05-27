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
    // space
    for (int k = 0; k < num - i; k++)
    {
      cout << " ";
    }

    // numbers
    for (int j = 1; j <= i; j++)
    {
      cout << count;
      count++;
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int l = 0, b = 0;
  cout << "enter the value of length and breadth" << endl;
  cin >> l >> b;

  int area = l * b;
  int perimeter = 2 * (l + b);

  cout << "area: " << area << endl;
  cout << "perimeter: " << perimeter;

  return 0;
}
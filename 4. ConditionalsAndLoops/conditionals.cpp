#include <iostream>
using namespace std;

int main()
{
  //  conditionals
  int marks;
  cout << "enter your marks" << endl;
  cin >> marks;

  // range 0 to 35 --> Grade E
  if (marks >= 0 && marks < 35)
  {
    cout << "Grade E";
    if (marks > 20)
    {
      cout << " " << marks;
    }
  }
  // range 35 to 50 --> Grade D
  else if (marks >= 35 && marks < 50)
  {
    cout << "Grade D";
  }
  // range 50 to 75 --> Grade C
  else if (marks >= 50 && marks < 75)
  {
    cout << " Grade C";
  }
  // range 75 t0 80 --> Grade B
  else if (marks >= 75 && marks < 80)
  {
    cout << "Grade B";
  }
  // Range 80 to 100 --> Grade A
  else
  {
    cout << "Grade A";
  }

  return 0;
}
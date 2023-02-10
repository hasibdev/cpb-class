#include <iostream>
using namespace std;

int main()
{
  int p1, p2, p3, p4;
  int target = 10;
  int count = 0;

  cin >> p1 >> p2 >> p3 >> p4;

  if (p1 >= target)
  {
    count++;
  }
  if (p2 >= target)
  {
    count++;
  }
  if (p3 >= target)
  {
    count++;
  }
  if (p4 >= target)
  {
    count++;
  }
  cout << count << endl;
  return 0;
}

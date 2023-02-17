#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;

    cin >> x >> y;

    if (x < y)
    {
      cout << "First" << endl;
    }
    else if (y < x)
    {
      cout << "Second" << endl;
    }
    else
    {
      cout << "Any" << endl;
    }
  }
  return 0;
}

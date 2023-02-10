#include <iostream>

using namespace std;

int main()
{
  int t; // 0
  cin >> t;

  int d = 5;

  while (t--)
  {
    int x;
    cin >> x;

    int total = (x * 2) * d;
    cout << total << endl;
  }

  return 0;
}
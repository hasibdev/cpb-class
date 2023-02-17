#include <iostream>
#include <cmath>

using namespace std;

long long factorial(int x)
{
  long long result = 1;
  for (int i = 1; i <= x; i++)
  {
    result *= i;
  }
  return result;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, r;
    cin >> n >> r;
    cout << factorial(abs(n)) / factorial(abs(n) - abs(r)) << endl;
  }
  return 0;
}

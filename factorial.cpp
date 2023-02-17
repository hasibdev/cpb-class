#include <iostream>
using namespace std;

int factorial(int n)
{
  int result = 1;
  for (int i = 1; i <= n; i++)
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
    cout << factorial(n) / factorial(n - r) << endl;
  }

  return 0;
}

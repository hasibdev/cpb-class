#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int count = 0;

  while (t--)
  {
    count++;
    int n;
    int total = 0;
    cin >> n;

    while (n--)
    {
      int dust;
      cin >> dust;

      // check if dust unit is positive
      if (dust > 0)
      {
        total += dust;
      }
    }
    cout << "Case " << count << ": " << total << endl;
  }
  return 0;
}

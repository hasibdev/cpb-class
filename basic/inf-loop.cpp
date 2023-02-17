#include <iostream>
#include <string>

using namespace std;

main()
{

  while (true)
  {
    cout << "Your Command" << endl;
    string n = "";
    cin >> n;

    if (n == "stop")
    {
      cout << "By by " << endl;
      break;
    }
    else
    {
      cout << "Your text " << n << endl;
    }
  }
}
#include "iostream"
#include "cmath"

using namespace std;

int main()
{
  double value = 0.5;

  // Trigonometric Functions
  cout << "sin - " << sin(value) << endl;
  cout << "cos - " << cos(value) << endl;
  cout << "tan - " << tan(value) << endl;

  // Inverse Trigonometric Functions
  cout << "Inverse sin - " << asin(value) << endl;
  cout << "Inverse cos - " << acos(value) << endl;
  cout << "Inverse tan - " << atan(value) << endl;

  // Hyperbolic Trigonometric Functions
  cout << "Hyperbolic sin - " << sinh(value) << endl;
  cout << "Hyperbolic cos - " << cosh(value) << endl;
  cout << "Hyperbolic tan - " << tanh(value) << endl;

  // Some Root Functions
  cout << "Square Root 4 - " << sqrt(4) << endl;
  cout << "Square Root 47 - " << sqrt(47) << endl;
  cout << "Square Root 16 - " << sqrt(16) << endl;
  cout << "Square Root 32 - " << sqrt(32) << endl;
  cout << "Square Root 100 - " << sqrt(100) << endl;
  cout << "Square Root 142 - " << sqrt(142) << endl;

  cout << "Cubed Root 4 - " << cbrt(4) << endl;
  cout << "Cubed Root 47 - " << cbrt(47) << endl;
  cout << "Cubed Root 16 - " << cbrt(16) << endl;
  cout << "Cubed Root 32 - " << cbrt(32) << endl;
  cout << "Cubed Root 100 - " << cbrt(100) << endl;
  cout << "Cubed Root 9 - " << cbrt(9) << endl;

  // Logarithms
  cout << "Log 9 - " << log(9) << endl;
  cout << "Log 5 - " << log(5) << endl;
  cout << "Log 1.5 - " << log(1.5) << endl;
  cout << "Log 3.2 - " << log(3.2) << endl;

  // Round Functions
  cout << "Round 3.2 - " << round(3.2) << endl;
  cout << "Round 5 - " << round(5) << endl;
  cout << "Round 5.2 - " << round(5.2) << endl;
  cout << "Round 100.00 - " << round(100.00) << endl;

  // Absolute Functions
  cout << "Absolute 3.2 - " << abs(-3.2) << endl;
  cout << "Absolute 5 - " << abs(-5) << endl;

  // Power Functions
  cout << "Power 5 2 - " << pow(5, 2) << endl;
  cout << "Power 5 3 - " << pow(5, 3) << endl;

  // Ceil an Floor
  cout << "Ceil 3.4 - " << ceil(3.4) << endl;
  cout << "Ceil 3.5 - " << ceil(3.5) << endl;
  cout << "Ceil 3.6 - " << ceil(3.6) << endl;
  cout << "Ceil 3.9 - " << ceil(3.9) << endl;
  cout << "Floor 3.4 - " << floor(3.4) << endl;
  cout << "Floor 3.5 - " << floor(3.5) << endl;
  cout << "Floor 3.6 - " << floor(3.6) << endl;
  cout << "Floor 3.9 - " << floor(3.9) << endl;

  return 0;
}
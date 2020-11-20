#include <iostream>
using namespace std;
double celsius(double fahrenheit)
{
  return ((5.0 / 9.0 ) * (fahrenheit - 32));
}
double fahrenheit(double celsius)
{
  return ((9.0 / 5.0 ) * celsius + 32);
}

int main()
{
cout << "0 c degree is " << fahrenheit(0) << " f degree." << endl;
cout << "0 f degree is " << celsius(0) << " f degree." << endl;
return 0;
}

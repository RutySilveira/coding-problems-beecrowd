#include <iostream>
#include <iomanip>

int main()
{
  const double PI = 3.14159;
  double raio, area;

  std::cin >> raio;

  area = PI * raio * raio;

  std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

  return 0;
}

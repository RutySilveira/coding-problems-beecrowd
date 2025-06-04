#include <iostream>
#include <iomanip>

int main()
{
  double a, b, c, media;

  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  media = ((a * 2) + (b * 3) + (c * 5)) / 10;

  std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << std::endl;

  return 0;
}

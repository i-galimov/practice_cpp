// Даны длины сторон треугольника. Вычислите площадь треугольника.

#include <iostream>
#include <cmath>

int main() {
  double a, b, c, p, res;
  std::cin >> a >> b >> c;
  p = (a  + b + c) / 2;
  res = (p * (p - a) * (p - b) * (p - c));
  std::cout << sqrt(res) << std::endl;
  return 0;
}

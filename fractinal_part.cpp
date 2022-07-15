// Дано положительное действительное число X. Выведите его дробную часть.

#include <iostream>

int main() {
  double a;
  std::cin >> a;
  int b = (int)a;
  double c = a - b;
  std::cout << c;
  return 0;
}

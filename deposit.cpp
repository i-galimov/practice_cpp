// Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.

#include <iostream>
#include <cmath>

int main() {
  int P, X, Y, V, res;
  std::cin >> P >> X >> Y;
  V = X * 100 + Y;
  res = int(V + V * P/100);
  X = floor(res / 100);
  Y = res - X * 100;
  std::cout << X << " " << Y;
  return 0;
}

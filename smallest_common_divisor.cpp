// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

#include <iostream>
using namespace  std;

int main() {
  int num;
  cin >> num;
  int i = 2;
  while (i <= num) {
    if (num % i == 0) {
      cout << i;
      return 0;
    } else {
      i++;
    }
  }
  return 0;
}

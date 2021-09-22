// Определите сумму всех элементов последовательности, завершающейся числом 0.

#include <iostream>
using namespace  std;

int main() {
  int N, sum;
  sum = 0;
  cin >> N;
  while (N != 0) {
    sum += N;
    cin >> N;
  }
  cout << sum;
  return 0;
}

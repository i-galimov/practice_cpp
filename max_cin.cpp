// Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение наибольшего элемента последовательности.

#include <iostream>
using namespace  std;

int main() {
  int N, max;
  max = 0;
  cin >> N;
  while (N != 0) {
    if (N > max) {
      max = N;
    } 
    cin >> N;
  }
  cout << max;
  return 0;
}

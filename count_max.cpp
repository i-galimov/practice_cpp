// Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.

#include <iostream>
using namespace  std;

int main() {
  int N, max, count;
  max = 0;
  count = 0;
  cin >> N;
  while (N != 0) {
    if (N > max) {
      max = N;
      count = 1;
    } 
    cin >> N;
    if (max == N) {
      count++;
    }
  }
  cout << count;
  return 0;
}

// По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

#include <iostream>
using namespace std;
int main() {
  int n, num;
  num = 1;
  cin >> n;
  while (num * num <= n) {
  cout << num * num << " ";
  num = num + 1;
  }
  return 0;
}

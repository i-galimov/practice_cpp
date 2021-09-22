// По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

#include <iostream>
using namespace std;

int main() {
  int N, i;
  cin >> N;
  i = 1;
  while (i <= N) {
    cout << i << " ";
    i *= 2;
  }
  return 0;
}

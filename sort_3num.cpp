// Дано три числа. Упорядочите их в порядке неубывания.

#include <iostream>
using namespace std;
int main() {
  int a, b, c, buffer;
  cin >> a >> b >> c;
  if (a > b) {
    buffer = a;
    a = b;
    b = buffer;
  }
  if (b > c) {
    buffer = b;
    b = c;
    c = buffer;
  }
  if (a > b) {
    buffer = a;
    a = b;
    b = buffer;
  }
  cout << a << " " << b << " " << c;
  return 0;
}

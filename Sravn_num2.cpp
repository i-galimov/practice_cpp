// Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.

#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  cin >> a >> b;
  if (a > b) {
    cout << 1;
  } if (a < b) {
    cout << 2;
  } if (a == b) {
    cout << 0;
  }
  return 0;
}

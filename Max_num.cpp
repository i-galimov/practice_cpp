// Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.

#include <iostream>
using namespace std;
int main() {
  int a, b, c, max;
  cin >> a;
  cin >> b;
  cin >> c;
  if (a > b) {
    max = a;
  } else {
    max = b;
  }
  if (max > c) {
    cout << max;
  } else {
    max = c;
    cout << max;
  }
  return 0;
}

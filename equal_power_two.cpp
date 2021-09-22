// Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.

#include <iostream>
using namespace std;

int main() {
  int N, i;
  cin >> N;
  i = 1;
  while (i <= N) {
    if (i == N) {
      cout << "YES";
      return 0;
    } i *= 2;
  }
  cout << "NO";
  return 0;
}

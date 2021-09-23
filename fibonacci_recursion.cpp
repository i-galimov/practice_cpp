// По данному числу N определите N-е число Фибоначчи F(N).

#include <iostream>
using namespace  std;

int fib(int num) {
  if (num == 1) {
    return 1;
  }
  else if (num == 0) {
    return 0;
  }
  return fib(num - 1) + fib(num - 2);
}

int main() {
  int N;
  cin >> N;
  cout << fib(N);
  return 0;
}

// Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector <int> a(n);
  for (int i = 0; i < n; i++)
  {
  cin >> a[i];
  if (i % 2 == 0)
      cout << a[i] << " ";
  }
  return 0;
}

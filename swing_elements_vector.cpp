// Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, temp;
  cin >> n;
  vector <int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i += 2)
  {
    if (a[i + 1])
    {
      temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = temp;
    }
  }
   for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}

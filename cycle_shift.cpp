// Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, temp;
  cin >> n;
  vector <int> a(n);
  vector <int> final(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0 ; i < n - 1; i++)
  {
      final[i + 1] = a[i];
  }
  final[0] = a[n - 1];
  for (int i = 0; i < n; i++)
  {
    cout << final[i] << " ";
  }
  return 0;
}

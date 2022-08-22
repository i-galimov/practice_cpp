// Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента.

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
  if (i > 0 && a[i] > a[i - 1])
      cout << a[i] << " ";
  }
  return 0;
}

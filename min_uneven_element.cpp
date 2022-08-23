// Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, i, min;
  cin >> n;
  i = 0;
  min = 999999999;
  vector <int> a(n);
  while (i < n)
  {
    cin >> a[i];
    if (a[i] % 2 != 0 && a[i] < min)
    {
      min = a[i];
    }
    i++;
  }
  if (min == 999999999)
  {
    min = 0;
  }
  cout << min;
  return 0;
}

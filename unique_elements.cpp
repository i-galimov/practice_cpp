// Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, count;
  count = 1;
  cin >> n;
  vector <int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i != 0 && a[i] != a[i - 1])
    {
      count++;
    }
  }
  cout << count;
  return 0;
}

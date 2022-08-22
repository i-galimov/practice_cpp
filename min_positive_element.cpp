// Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  int min;
  int temp;
  vector <int> a;
  cin >> n;
  for (int i = 0; i < n; i++) 
  { 
    cin >> temp;
    if (temp > 0)
    { 
       a.push_back(temp); 
    }
  }
  min = a[0];
  for (int i = 0; i < a.size(); i++)
  {
    if (min > a[i])
    {
      min = a[i];
    }
  }
  cout << min;
  return 0;
}

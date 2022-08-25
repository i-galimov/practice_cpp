// Дана строка, содержащая пробелы. Найдите, сколько в ней слов (слово – это последовательность непробельных символов, слова разделены одним пробелом, первый и последний символ строки – не пробел).

#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  char space = ' ';
  int count = 1;
  getline(cin, str);
  for (int i = 0; i < str.size(); i++)
  if (str[i] == space)
  {
    count++;
  }
  cout << count;
  return 0;
}

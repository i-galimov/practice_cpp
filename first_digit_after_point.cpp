// Дано положительное действительное число X. Выведите его первую цифру после десятичной точки .

#include <iostream>
#include <string>

int main() {
  char a;
  int b;
  std::string input;
  std::cin >> input;
  int i = -1;
  while (input[++i] != '.');
  a = input[i + 1];
  std::cout << a;
  return 0;
}

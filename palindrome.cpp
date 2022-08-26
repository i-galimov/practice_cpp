// По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str;
  string str_rev;
  getline(cin, str);
  str_rev = str;
  reverse(str_rev.begin(), str_rev.end());
  if (str == str_rev)
  {
    cout << "yes";
  }
  else 
  {
    cout << "no";
  }
  return 0;
}

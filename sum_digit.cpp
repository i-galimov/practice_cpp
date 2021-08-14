// Дано целое трехзначное число. Найдите сумму его цифр.

#include <iostream>
using namespace  std;
int main() {
    int N, a, b, c, sum;
    cin >> N;
    c = N % 10;
    b = N / 10 % 10;
    a = N / 100;
    sum = a + b + c;
    cout << sum;
    return 0;
}

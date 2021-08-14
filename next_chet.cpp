// На вход дается натуральное число N. Выведите следующее за ним четное число

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N % 2 == 0) {
    N += 2;
    } else {
    N += 1;
    } cout << N;
    return 0;
}

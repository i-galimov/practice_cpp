// Дано натуральное число <= 10000 выведите его последнюю цифру.

#include <iostream>
using namespace std;
int main() {
    int N, res;
    cin >> N;
    res = N % 10;
    cout << res;
    return 0;
}

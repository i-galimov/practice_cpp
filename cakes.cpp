// Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.

#include <iostream>
using namespace std;
int main() {
    int a, b, n, rub, res;
    cin >> a >> b >> n;
    a *= n;
    b *= n;
    rub = b / 100;
    b %= 100;
    res = a + rub;
    cout << res << " ";
    cout << b;
    return 0;
}

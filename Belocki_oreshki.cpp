// N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.

#include <iostream>
using namespace std;
int main() {
    int N, K, R;
    cin >> N >> K;
    R = K / N;
    cout << R;
    return 0;
}


#include <iostream>
using namespace std;
 
int main() {
    long long k, n, w;
    cin >> k >> n >> w;
 
    long long total = (long long)k * w * (w + 1) / 2;
    long long borrow = max(0LL, total - n);
 
    cout << borrow;
    return 0;
}
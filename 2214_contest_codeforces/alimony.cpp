#include <bits/stdc++.h>
using namespace std;

int main() {
    string base_string = "bigchadjeff";
    int total_time;
    cin >> total_time;
    while (total_time--) {
        int i;
        cin >> i;
        cout << base_string[i-1] << '\n';
    }
    return 0;
}
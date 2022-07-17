#include <bits/stdc++.h>
using namespace std;

int main() {
    int maximum = 0;
    int now = 0;
    int g_in, g_out;
    for(int i = 0; i < 4; i++) {
        cin >> g_in >> g_out;
        now += (g_out - g_in);
        maximum = max(maximum, now);
    }
    cout << maximum;
}
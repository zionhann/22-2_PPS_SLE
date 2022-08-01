/**
 * @author zionhann
 * @date 2022-08-01
 * @title 3000번 버스
 * @from https://www.acmicpc.net/problem/9546
 * @elapsed_time N/A
 * @runtime 0ms
 * @memory_usage 2020KB
 */

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& v) {
    for (int k : v) {
        double ans = 0;

        while (k--) {
            ans += 0.5;
            ans *= 2;
        }
        cout << (int)ans << '\n';
    }
}

int main() {
    int n;
    vector<int> v;

    cin >> n;
    v.assign(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    Solution(v);
    return 0;
}
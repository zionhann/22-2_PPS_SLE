/**
 * @author zionhann
 * @date 2022-07-29
 * @title OX퀴즈
 * @from https://www.acmicpc.net/problem/8958
 * @elapsed_time 8min
 * @runtime 0ms
 * @memory_usage 2024KB
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Solution(vector<string>& v) {
    for (string s : v) {
        int ans = 0;
        int score = 1;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'O') {
                ans += score;
                score += 1;
                continue;
            }
            score = 1;
        }
        cout << ans << '\n';
    }
}

int main() {
    int n;
    vector<string> v;

    cin >> n;
    v.assign(n, "");

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    Solution(v);
    return 0;
}
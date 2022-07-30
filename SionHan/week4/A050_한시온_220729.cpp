/**
 * @author zionhann
 * @date 2022-07-29
 * @title 카이사르 암호
 * @from https://www.acmicpc.net/problem/5598
 * @elapsed_time 16min
 * @runtime 0 ms
 * @memory_usage 2024 KB 
 */

#include <iostream>
#include <string>

using namespace std;

void Solution(string s) {
    string ans;

    for (char c : s) {
        if (c - 3 < 65) {
            c += 23;
        } else {
            c -= 3;
        }
        ans.push_back(c);
    }
    cout << ans;
}

int main() {
    string s;

    cin >> s;
    Solution(s);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-07-25
 * @title 열 개씩 끊어 출력하기
 * @from https://www.acmicpc.net/problem/11721
 * @elapsed_time 20min
 * @runtime 0 ms
 * @memory_usage 2024 KB
 */

#include <iostream>
#include <string>

using namespace std;

void Solution(string s) {
    int line = s.size() / 10 + (int)(s.size()%10 > 0);

    for (int i = 0; i < line; ++i) {
        cout << s.substr(10*i, 10) << '\n';
    }
}

int main() {
    string s;

    cin >> s;
    Solution(s);
    return 0;
}
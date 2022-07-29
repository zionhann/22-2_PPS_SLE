/**
 * @author zionhann
 * @date 2022-07-29
 * @title 소트인사이드
 * @from https://www.acmicpc.net/problem/1427
 * @elapsed_time 9min
 * @runtime 0ms
 * @memory_usage 2024KB 
 */

#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

bool cmp(const char l, const char r) {
    return l - '0' > r - '0';
}

void Solution(string s) {
    sort(s.begin(), s.end(), cmp);
    cout << stoi(s);
}

int main() {
    string s;

    cin >> s;
    Solution(s);
    return 0;
}
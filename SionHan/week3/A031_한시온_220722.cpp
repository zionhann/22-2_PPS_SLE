/**
 * @author zionhann
 * @date 2022-07-22
 * @title 초콜릿 자르기
 * @from https://www.acmicpc.net/problem/2163
 * @elapsed_time 15min
 * @runtime 0 ms
 * @memory_usage 2020 KB 
 */

#include <iostream>

using namespace std;

void Solution(int n, int m) {
    cout << (m-1) + (m*(n-1));
}

int main() {
    int n, m;

    cin >> n >> m;

    Solution(n, m);
    return 0;
}
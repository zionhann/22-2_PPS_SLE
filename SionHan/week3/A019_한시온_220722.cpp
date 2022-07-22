/**
 * @author zionhann
 * @date 2022-07-22
 * @title 숫자의 개수
 * @from https://www.acmicpc.net/problem/2577
 * @elapsed_time 7min
 * @runtime 0 ms
 * @memory_usage 2020 KB
 */

#include <iostream>
#include <vector>

using namespace std;

void Solution(int a, int b, int c) {
    int num = a * b * c;
    vector<int> ans(10);

    while (num != 0) {
        ans[num%10] += 1;
        num /= 10;
    }

    for (int n : ans) {
        cout << n << '\n';
    }
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    Solution(a, b, c);
    return 0;
}
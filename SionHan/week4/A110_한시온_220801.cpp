/**
 * @author zionhann
 * @date 2022-08-01
 * @title 거스름돈
 * @from https://www.acmicpc.net/problem/5585
 * @elapsed_time 14min
 * @runtime 0ms
 * @memory_usage 2020KB 
 */

#include <iostream>
#include <vector>

using namespace std;

void Solution(int n) {
    vector<int> v = {500, 100, 50, 10, 5, 1};
    int change = 1000 - n;
    int ans = 0;

    for (int n : v) {
        if (change == 0) {
            break;
        }
        ans += change / n;
        change %= n;
    }
    cout << ans;
}

int main() {
    int n;

    cin >> n;
    Solution(n);
    return 0;
}
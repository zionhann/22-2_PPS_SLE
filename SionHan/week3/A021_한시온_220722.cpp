/**
 * @author zionhann
 * @date 2022-07-22
 * @title 플러그
 * @from https://www.acmicpc.net/problem/2010
 * @elapsed_time 6min
 * @runtime 88 ms
 * @memory_usage 3976 KB
 */

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& v) {
    int ans = 1;

    for (int plug : v) {
        ans += plug - 1;
    }
    cout << ans;
}

int main() {
    int n;
    vector<int> v;

    cin >> n;
    v.assign(n, 0);

    while (n--) {
        cin >> v[n];
    }
    Solution(v);
    return 0;
}
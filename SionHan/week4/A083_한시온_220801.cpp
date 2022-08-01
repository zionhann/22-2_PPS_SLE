/**
 * @author zionhann
 * @date 2022-08-01
 * @title 중복 빼고 정렬하기
 * @from https://www.acmicpc.net/problem/10867
 * @elapsed_time N/A
 * @runtime 36ms
 * @memory_usage 2416KB
 */

#include <iostream>
#include <set>
#include <vector>

using namespace std;

void Solution(vector<int>& v) {
    set<int> set(v.begin(), v.end());

    for (int n : set) {
        cout << n << ' ';
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
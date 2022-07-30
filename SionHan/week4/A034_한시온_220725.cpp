/**
 * @author zionhann
 * @date 2022-07-25
 * @title 나머지
 * @from https://www.acmicpc.net/problem/3052
 * @elapsed_time 5min
 * @runtime 0 ms
 * @memory_usage 2024 KB 
 */

#include <iostream>
#include <set>
#include <vector>

using namespace std;

void Solution(vector<int>& v) {
    const int modulo = 42;
    set<int> set;

    for (int n : v) {
        set.insert(n%modulo);
    }
    cout << set.size();
}

int main() {
    vector<int> v(10);

    for (int i = 0; i < 10; ++i) {
        cin >> v[i];
    }
    Solution(v);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-08-01
 * @title N번째 큰 수
 * @from https://www.acmicpc.net/problem/2693
 * @elapsed_time 31min
 * @runtime 4ms
 * @memory_usage 2024KB 
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<vector<int>>& v, const int N) {
    for (auto values : v) {
        sort(values.begin(), values.end(), greater<int>());
        cout << values[N-1] << '\n';
    }
}

int main() {
    const int N = 3, capa = 10;
    vector<vector<int>> v;
    vector<int> values(capa);
    int n;
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < capa; ++j) {
            cin >> values[j];
        }
        v.push_back(values);
    }
    Solution(v, N);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-07-29
 * @title 좌표 정렬하기
 * @from https://www.acmicpc.net/problem/11650
 * @elapsed_time 31min
 * @runtime 124 ms
 * @memory_usage 4356 KB
 * @ref 
 * Kyungmin Kim(김경민), "[C++] Sort함수에 사용자 정의함수, operator를 넣어보자," Medium, Jan. 9, 2021. 
 * [Online]. Available: https://medium.com/letsps/c-sort%ED%95%A8%EC%88%98%EC%97%90-%EC%82%AC%EC%9A%A9%EC%9E%90-%EC%A0%95%EC%9D%98%ED%95%A8%EC%88%98-operator%EB%A5%BC-%EB%84%A3%EC%96%B4%EB%B3%B4%EC%9E%90-21e920699c83
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(const pair<int, int> left, const pair<int, int> right) {
        if (left.first == right.first) {
            return left.second < right.second;
       }
       return left.first < right.first;
}

void Solution(vector<int>& x, vector<int>& y) {
    vector<pair<int, int>> ans;

    for (int i = 0; i < x.size(); ++i) {
        ans.push_back({x[i], y[i]});
    }
    sort(ans.begin(), ans.end(), cmp);

    for (auto pair : ans) {
        cout << pair.first << ' ' << pair.second << '\n';
    }
}

int main() {
    int n;
    vector<int> x, y;
    
    cin >> n;
    x.assign(n, 0);
    y.assign(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    Solution(x, y);
    return 0;
}
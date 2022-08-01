/**
 * @author zionhann
 * @date 2022-08-01
 * @title 나이순 정렬
 * @from https://www.acmicpc.net/problem/10814
 * @elapsed_time N/A
 * @runtime 112ms
 * @memory_usage 9732KB
 * @ref 
 * ks0689, "vector sort 반례가 있나요?," acmicpc.net, Jul. 19, 2022. 
 * [Online]. Available: https://www.acmicpc.net/board/view/94665#comment-152122
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool cmp(const pair<int,string> left, const pair<int,string> right) {
    return left.first < right.first;
}

void Solution(vector<pair<int,string>>& v) {
    stable_sort(v.begin(), v.end(), cmp);

    for (auto member : v) {
        cout << member.first << ' ' << member.second << '\n';
    }
}

int main() {
    int n;
    vector<pair<int, string>> v;

    cin >> n;

    while (n--) {
        pair<int, string> pair;

        cin >> pair.first >> pair.second;
        v.push_back(pair);
    }
    Solution(v);
    return 0;
}
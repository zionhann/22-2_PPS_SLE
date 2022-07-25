/**
 * @author zionhann
 * @date 2022-07-25
 * @title 농구 경기
 * @from https://www.acmicpc.net/problem/1159
 * @elapsed_time 23min
 * @runtime 0 ms
 * @memory_usage 2028 KB 
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void Solution(vector<string>& v) {
    string ans;
    map<char, int> map;

    for (string s : v) {
        map[s.front()] += 1;
    }

    for (auto pair : map) {
        if (pair.second >= 5) {
            ans.push_back(pair.first);
        }
    }

    if (ans.empty()) {
        cout << "PREDAJA";
        return;
    }
    cout << ans;
}

int main() {
    int n;
    string s;
    vector<string> v;

    cin >> n;

    while (n--) {
        cin >> s;
        v.push_back(s);
    }
    Solution(v);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-08-01
 * @title 등장하지 않는 문자의 합
 * @from https://www.acmicpc.net/problem/3059
 * @elapsed_time  N/A
 * @runtime 0ms
 * @memory_usage 2024KB 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Solution(vector<string>& v) {
    for (auto s : v) {
        int ans = 0;
        
        for (char c = 'A'; c <= 'Z'; ++c) {
            if (s.find(c) == string::npos) {
                ans += c;            
            }
        }
        cout << ans << '\n';
    }
}

int main() {
    int n;
    vector<string> v;
    string s;

    cin >> n;
    v.assign(n, "");

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    Solution(v);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-07-26
 * @title 그룹 단어 체커
 * @from https://www.acmicpc.net/problem/1316
 * @elapsed_time 31min
 * @runtime 0 ms
 * @memory_usage 2028 KB 
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void Solution(vector<string>& words) {
    int ans = 0;
    map<char, bool> done;

    for (auto word : words) {
        char curr = word.front();
        
        for (auto iter = word.begin(); iter != word.end(); ++iter) {
            if (done.count(*iter)) {
                ans -= 1;
                break;
            } else if (*iter != curr) {
                done[curr] = true;
                curr = *iter;
            }
        }
        done.clear();
        ans += 1;
    }
    cout << ans;
}

int main() {
    vector<string> v;
    int n;
    
    cin >> n;
    v.assign(n, "");

    while (n--) {
        cin >> v[n];
    }
    Solution(v);
    return 0;
}
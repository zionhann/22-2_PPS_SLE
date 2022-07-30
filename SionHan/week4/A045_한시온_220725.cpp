/**
 * @author zionhann
 * @date 2022-07-25
 * @title 단어 공부
 * @from https://www.acmicpc.net/problem/1157
 * @elapsed_time 40min
 * @runtime 80 ms
 * @memory_usage 4936 KB
 */

#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

void Solution(string s) {
    pair<char, int> max;
    set<char> set;
    vector<int> v;

    for (char& c : s) {
        c = toupper(c);
        set.insert(c);    
    }

    for (char c : set) {
        int n = count(s.begin(), s.end(), c);

        if (max.second < n) {
            max.first = c;
            max.second = n;
        }
        v.push_back(n);
    }

    if (count(v.begin(), v.end(), max.second) > 1) {
        cout << '?';
        return;
    }
    cout << max.first;
}

int main() {
    string s;

    cin >> s;
    Solution(s);
    return 0;
}
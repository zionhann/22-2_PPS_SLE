/**
 * @author zionhann
 * @date 2022-07-29
 * @title 다이얼
 * @from https://www.acmicpc.net/problem/5622
 * @elapsed_time 41min
 * @runtime 0 ms
 * @memory_usage 2028 KB 
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

void Solution(string s) {
    const string pqrs("PQRS"), wxyz("WXYZ");
    const string key("ABCDEFGHIJKLMNOTUV"), value("222333444555666888");
    map<char, int> vocab;
    int ans = 0;

    for (int i = 0; i < key.size(); ++i) {
        vocab.insert({key[i], value[i]-'0'});
    }

    for (char c : s) {
        if (pqrs.find(c) != string::npos) {
            ans += 8;
        } else if (wxyz.find(c) != string::npos) {
            ans += 10;
        } else {
            ans += (vocab[c]+1);
        }
    }
    cout << ans;
}

int main() {
    string s;

    cin >> s;
    Solution(s);
    return 0;
}
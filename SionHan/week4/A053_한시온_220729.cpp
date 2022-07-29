/**
 * @author zionhann
 * @date 2022-07-29
 * @title 스택
 * @from https://www.acmicpc.net/problem/10828
 * @elapsed_time 36min
 * @runtime 4ms
 * @memory_usage 2476KB
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Solution(vector<string>& v) {
    vector<int> stack;

    for (auto op : v) {
        if (op.find(string("push")) != string::npos) {
            stack.push_back(stoi(op.substr(op.find(' ')+1)));
        } else if (op == "pop") {
            if (stack.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << stack.back() << '\n';
            stack.pop_back();
        } else if (op == "size") {
            cout << stack.size() << '\n';
        } else if (op == "empty") {
            cout << (int)stack.empty() << '\n';
        } else if (op == "top") {
            if (stack.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << stack.back() << '\n';
        }
    }
}

int main() {
    int n;
    vector<string> v;

    cin >> n;
    v.assign(n, "");
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        getline(cin, v[i]);
    }
    Solution(v);
    return 0;
}
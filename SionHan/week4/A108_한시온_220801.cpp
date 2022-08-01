/**
 * @author zionhann
 * @date 2022-08-01
 * @title 수 뒤집기
 * @from https://www.acmicpc.net/problem/3062
 * @elapsed_time N/A
 * @runtime 0ms
 * @memory_usage 2028KB 
 */

#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

string Reverse(string s) {
    string reversed;

    for (auto iter = s.crbegin(); iter != s.crend(); ++iter) {
        reversed.push_back(*iter);    
    }
    return reversed;
}

void Solution(vector<string>& v) {
    for (auto s : v) {
        bool is_pal = true;
        int origin = stoi(s), reversed = stoi(Reverse(s));
        string sum = to_string(origin+reversed);

        while (sum.size() >= 2) {
            if (sum.front() != sum.back()) {
                cout << "NO" << '\n';
                is_pal = false;
                break;
            }

            if (sum.size() == 2) {
                break;
            }
            sum = sum.substr(1, sum.size()-2);
        }

        if (is_pal) {
            cout << "YES" << '\n';
        }
    }
}

int main() {
    int n;
    vector<string> v;

    cin >> n;
    v.assign(n, "");

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    Solution(v);
    return 0;
}
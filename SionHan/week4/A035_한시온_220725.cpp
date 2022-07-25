/**
 * @author zionhann
 * @date 2022-07-25
 * @title 화성 수학
 * @from https://www.acmicpc.net/problem/5355
 * @elapsed_time 45+min
 * @runtime 0 ms
 * @memory_usage 2024 KB 
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Solution(vector<string>& v) {
    for (string s : v) {
        auto pos = min({s.find('@'), s.find('%'), s.find('#')});
        double val = stod(s.substr(0, pos));

        for (auto iter = s.begin()+pos; iter != s.end(); ++iter) {
            if (*iter == '@') {
                val *= 3;
            } else if (*iter == '%') {
                val += 5;
            } else {
                val -= 7;
            }
        }
        printf("%.2lf\n", val);
    }
}

int main() {
    int n;
    string s;
    vector<string> v;

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        v.push_back(s);
    }
    Solution(v);
    return 0;
}
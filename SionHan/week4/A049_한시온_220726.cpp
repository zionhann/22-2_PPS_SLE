/**
 * @author zionhann
 * @date 2022-07-26
 * @title 비밀번호 발음하기
 * @from https://www.acmicpc.net/problem/4659
 * @elapsed_time 45+min
 * @runtime 0 ms
 * @memory_usage 2024 KB 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void Solution(vector<string>& passwords) {
    for (string pwd : passwords) {
        int vowel = 0, vowel_or = 0;
        bool done = false;

        if (IsVowel(pwd.front())) {
            vowel += 1;
            vowel_or = -1;
        } else {
            vowel_or = 1;
        }

        for (auto iter = pwd.begin()+1; iter != pwd.end(); ++iter) {
            if (*iter == *prev(iter) && (*iter != 'e' && *iter != 'o')) {
                cout << "<" << pwd << ">" << " is not acceptable." << '\n';
                done = true;
                break;
            }

            if (IsVowel(*iter)) {
                vowel += 1;
                vowel_or = (vowel_or > 0)
                    ? -1
                    : vowel_or-1;
            } else {
                vowel_or = (vowel_or < 0)
                    ? 1
                    : vowel_or+1;
            }

            if (vowel_or == +3 || vowel_or == -3) {
                cout << "<" << pwd << ">" << " is not acceptable." << '\n';
                done = true;
                break;
            }
        }

        if (done) {
            continue;
        } else if (vowel < 1) {
            cout << "<" << pwd << ">" << " is not acceptable." << '\n';
            continue;
        }
        cout << "<" << pwd << ">" << " is acceptable." << '\n';
    }
}

int main() {
    vector<string> v;
    string s;
    
    do {
        cin >> s;
        v.push_back(s);
    } while (v.back() != "end");
    v.pop_back();
    Solution(v);
    return 0;
}
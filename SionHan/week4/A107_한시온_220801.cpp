/**
 * @author zionhann
 * @date 2022-08-01
 * @title 쉽게 푸는 문제
 * @from https://www.acmicpc.net/problem/1292
 * @elapsed_time N/A
 * @runtime 0ms
 * @memory_usage 2020KB 
 */

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void Solution(int first, int last) {
    int i = 1;
    vector<int> v;

    while (v.size() < last) {

        for (int j = 0; j < i; ++j) {
            v.push_back(i);
        }
        i += 1;
    }
    cout << accumulate(v.begin()+first-1, v.begin()+last, 0);
}

int main() {
    int f, l;

    cin >> f >> l;
    Solution(f, l);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-07-22
 * @title 음계
 * @from https://www.acmicpc.net/problem/2920
 * @elapsed_time 14min
 * @runtime 0 ms
 * @memory_usage 2024 KB
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& arr) {
    vector<int> origin(arr);

    sort(arr.begin(), arr.end());

    if (origin == arr) {
        cout << "ascending";
        return;
    }
    sort(arr.begin(), arr.end(), greater<int>());

    if (origin == arr) {
        cout << "descending";
        return;
    }
    cout << "mixed";
}

int main() {
    int i = 0;
    vector<int> arr(8);

    while (i < 8) {
        cin >> arr[i];
        i += 1;
    }
    Solution(arr);
    return 0;
}
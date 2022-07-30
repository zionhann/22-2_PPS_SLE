/**
 * @author zionhann
 * @date 2022-07-22
 * @title 검증수
 * @from https://www.acmicpc.net/problem/2475
 * @elapsed_time 6min
 * @runtime 0 ms
 * @memory_usage 2020 KB 
 */

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& nums) {
    int sum = 0;

    for (int num : nums) {
        sum += num * num;
    }
    cout << sum % 10;
}

int main() {
    int n = 5;
    vector<int> arr(5);

    while (n--) {
        cin >> arr[n];
    }
    Solution(arr);
    return 0;
}
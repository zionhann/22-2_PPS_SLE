/**
 * @author zionhann
 * @date 2022-07-22
 * @title 보물
 * @from https://www.acmicpc.net/problem/1026
 * @elapsed_time 28min
 * @runtime 0 ms
 * @memory_usage 2024 KB 
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& a, vector<int>& b) {
    int size = a.size();
    int sum = 0;
    
    sort(a.begin(), a.end());

    for (int i = 0; i < size; ++i) {
        auto max = max_element(b.begin(), b.end());

        sum += a[i] * (*max);
        *max = -1;
    }
    cout << sum;
}

int main() {
    vector<int> a;
    vector<int> b;
    int n;  

    cin >> n;
    a.assign(n, 0);
    b.assign(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    Solution(a, b);
    return 0;
}

/**
 * @author zionhann
 * @date 2022-07-22
 * @title 핸드폰 요금
 * @from https://www.acmicpc.net/problem/1267
 * @elapsed_time N/A
 * @runtime 0 ms
 * @memory_usage 2020 KB 
 */

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& v) {
    struct { int y; int m; } plan { .y=0, .m=0 };

    for (int cost : v) {
        plan.y += (cost/30) * 10 + 10;
        plan.m += (cost/60) * 15 + 15;
    }

    if (plan.y == plan.m) {
        cout << "Y M " << plan.y;
    } else if (plan.y > plan.m) {
        cout << "M " << plan.m;
    } else {
        cout << "Y " << plan.y;
    }
}

int main() {
    int n;
    vector<int> v;

    cin >> n;
    v.assign(n, 0);

    while (n--) {
        cin >> v[n];
    }
    Solution(v);
    return 0;
}
/**
 * @author zionhann
 * @date 2022-07-22
 * @title 방 번호
 * @from https://www.acmicpc.net/problem/1475
 * @elapsed_time 20min
 * @runtime 0 ms
 * @memory_usage 2020 KB 
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Solution(int n) {
    int i = 0;
    vector<int> counter(10);
    
    while (n != 0) {
        int digit = n % 10;

        if (digit == 6 || digit == 9) {
            i += 1;
        } else {
            counter[digit] += 1;
        }
        n /= 10;
    }
    cout << max(*max_element(counter.begin(), counter.end()), i/2+i%2);
}

int main() {
    int n;  

    cin >> n;
    Solution(n);
    return 0;
}
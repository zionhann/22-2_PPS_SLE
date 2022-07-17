#include <bits/stdc++.h>
using namespace std;

int main() {
    int answer = 0;
    int N, sum;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> sum;
        answer += sum -1;
    }
    cout << answer+1;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    int answer[10] = {0,};
    cin >> A >> B >> C;
    int Mul = A * B * C;

    string a = to_string(Mul);
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < a.length(); j++) {
            if(i == a[j] - '0') answer[i]++;
        }
        cout << answer[i] << endl;
    }
}
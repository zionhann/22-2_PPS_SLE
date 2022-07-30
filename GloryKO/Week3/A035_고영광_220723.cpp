#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    double f;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> f;
        getline(cin,s);
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == ' ') continue;
            if(s[j] == '@') f *= 3.0;
            if(s[j] == '%') f += 5.0;
            if(s[j] == '#') f -= 7.0;
        }
        printf("%.2f\n", f);
    }
}
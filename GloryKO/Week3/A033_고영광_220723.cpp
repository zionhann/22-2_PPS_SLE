#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> chef(5);
    int temp;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> temp;
            chef[i] += temp;
        }
    }
    cout << distance(chef.begin(),max_element(chef.begin(),chef.end()))+1 << "\n" << *max_element(chef.begin(),chef.end());
}
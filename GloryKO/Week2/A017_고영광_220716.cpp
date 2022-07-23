#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    int maxi = 0;
    vector<int> arr(10);
    for(int i = 0; i < N.length(); i++) {
        arr[N[i] - '0']++;
    }

    arr[9] = ceil((arr[6] + arr[9]) / 2.0);
    arr[6] = arr[9];
    sort(arr.begin(), arr.end());

    cout << arr.back();
}
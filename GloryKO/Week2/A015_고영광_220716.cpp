#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];
    int answer = 0;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        answer += pow(arr[i], 2);
    }

    cout << answer % 10;
}
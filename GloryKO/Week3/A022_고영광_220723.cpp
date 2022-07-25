#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int arr[20];
    int M = 0, Y = 0;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        M += (arr[i] / 60 + 1) * 15;
        Y += (arr[i] / 30 + 1) * 10;
    }
    if(M == Y) cout << "Y " << "M " << Y;
    else {
        M < Y ? cout << "M " << M : cout << "Y " << Y;
    }
}
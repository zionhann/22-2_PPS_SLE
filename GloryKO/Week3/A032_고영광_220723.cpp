#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <functional>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    int K, N, M;
    cin >> K;
    vector<int> floor(K);
    vector<int> hosu(K);
    for(int i = 0; i < K; i++) {
        cin >> floor[i] >> hosu[i];
    }
    N = *max_element(floor.begin(), floor.end());
    M = *max_element(hosu.begin(), hosu.end());
    int arr[N+1][M+1];
    for(int i = 1; i <= M; i++) {
        arr[0][i] = i;
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            arr[i][j] = 0;
            for(int k = 1; k <= j; k++) {
                arr[i][j] += arr[i-1][k];
            }
        }
    }
    for(int i = 0; i < K; i++) {
        cout << arr[floor[i]][hosu[i]] << endl;
    }
}
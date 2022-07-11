#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <math.h>
using namespace std;

int main() {
    
    int N, M, temp;
    double aver = 0;
    int member = 0;
    cin >> N;
    vector<vector<int>> arr(N);

    for(int i = 0; i < N; i++) {
        cin >> M;
        for(int j = 0; j < M; j++) {
            cin >> temp;
            arr[i].push_back(temp);
        }
        aver = accumulate(arr[i].begin(), arr[i].end(), 0.0) / arr[i].size();
        member = 0;
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] > (int)(aver)) member++;
        }
        cout << fixed;
        cout.precision(3);
        cout << (double)(member * 100.0 / arr[i].size()) << "%" << endl;
    }
} 
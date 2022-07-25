#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <functional>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A > 5) cout << "Love is open door";
    else {
        bool arr[6];
        arr[1] = B;
        for(int i = 2; i <= A; i++) {
            arr[i] = !arr[i-1];
            cout << arr[i] << endl;
        }
    }
}
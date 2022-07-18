#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t;
    int sum = 0;
    for(int i = 0; i < n; i++ ){
        cin >> t;
        sum += t;

    }
    sum = sum - (n - 1);
    cout << sum;
}
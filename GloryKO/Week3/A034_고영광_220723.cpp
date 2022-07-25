#include <bits/stdc++.h>
using namespace std;

int main() {
    bool arr[42];
    fill_n(arr,42,false);
    int temp = 0, count = 0;

    for(int i = 0; i < 10; i++) {
        cin >> temp;
        arr[temp % 42] = true;
    }

    for(int i = 0; i < 42; i++) 
        if(arr[i] == true) count++;
    cout << count;
}
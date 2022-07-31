#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *rope = new int[n];
    int temp;
    int max = 0;
    int sum;
    for(int i = 0; i < n; i++){
        cin >> rope[i];
    }
    // for(int i = 0; i < n-1; i++){
    //     for(int j = i+1; j <n;j++){
    //         if(rope[i] > rope[j]){
    //             temp = rope[i];
    //             rope[i] = rope[j];
    //             rope[j] = temp;
    //         }
    //     }
    // }
    sort(rope,rope + n);
    for(int i = 0; i < n; i++){
        sum = 0;
        sum = rope[i];
        if(max < sum*(n-i))max = sum*(n-i);
    }
    cout << max;


}
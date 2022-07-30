#include <iostream>
using namespace std;

int main(){
    int a[5][4];
    int sum[5] ={0,};
    int v;
    int l;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
            sum[i] += a[i][j];
        }
    }
    v = sum[0];
    l = 1;
    for(int i = 1; i < 5; i++){
        if(v < sum[i]){
            v = sum[i];
            l = i+1;
        }
    }
    cout << l << " " << v;
}
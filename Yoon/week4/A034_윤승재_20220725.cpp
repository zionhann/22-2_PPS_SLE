#include <iostream>
using namespace std;

int main(){
    int a[42] = {0,};
    int n;
    int count = 0;
    for(int i = 0; i < 10; i++){
        cin >> n;
        for(int j = 0; j < 42; j++){
            if(n%42 == j)a[j]++;
        }
    }
    for(int i = 0; i < 42; i++){
        if(a[i] !=0)count++;
    }
    cout << count;
}
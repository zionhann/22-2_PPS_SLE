#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    int num = -1000;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(1){
        for(int i = 0; i < n; i++){
            if(arr[i] == num){
                cout <<arr[i] << " ";
                break;
            }
        }
        if(num == 1000)break;
        num++;

    }
}
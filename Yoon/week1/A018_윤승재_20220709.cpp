#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int min;
    int* ca = new int[n];
    int* cb = new int[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        ca[i] = 0; // arr 전체를 1로 초기화
        cb[i] = 0;
        for(int j=0; j<n; j++) {
            // if((i != j) && a[i] == a[j]){
            //     ca[i]++;
            // }
            // if((i != j) && b[i] == b[j]){
            //     cb[i]++;
            // }
            if(a[i] < a[j]) {
                ca[i]++;
            }
            if(b[i] < b[j]) {
                cb[i]++;
            }
        }   
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                ca[j] ++;
            }
            if(b[i] == b[j]){
                cb[j] ++;
            }
        }
    }


    for(int i = 0; i < n; i ++){
        int k;
        k = (n-cb[i]-1);
        int j;
        for(j = 0; j < n; j++){
            if(ca[j] == k){
                sum += b[i] * a[j];
                break;
            }

            
        }


    }
    cout << sum;

}
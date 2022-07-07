#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = n;
    int c = 0;// 체크용
    for(int j = 2; j < n; j++){
        while(1){
            if(k % j ==0){
                k = k/j;
                cout << j << endl;
                c = 1;
            }
            else break;
        }
        
    }
    if(c==0 && n != 1){
        cout << n;
    }
}
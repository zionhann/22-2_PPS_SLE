#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int num[10] = {0,};
    int key;
    int big = a * b * c;
    while(1){
        key = big % 10;
        num[key]++;
        big /= 10;
        if(big < 10){
            num[big]++;
            break;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << num[i] << "\n";

    }
}
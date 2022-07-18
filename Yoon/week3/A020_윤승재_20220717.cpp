#include <iostream>
using namespace std;

int main(){
    int down[4];
    int up[4];
    int pas = 0;
    int max = 0;

    for(int i = 0; i < 4; i++){
        cin >> down[i] >> up[i];
        pas = pas + up[i] - down[i];
        if(pas > max){
            max = pas;
        }
    }
    cout << max;

    
}
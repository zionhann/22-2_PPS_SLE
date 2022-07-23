#include <iostream>

using namespace std;

int main(void){
    int score[5];
    int num=0, max=0;
    int idx=0;

    for(int i=0; i<5; i++){
        score[i] = 0;
        for(int j=0; j<4; j++){
            cin >> num;
            score[i] += num;
        }
        if(score[i] > max) {
            max = score[i];
            idx = i;
        }
    }
    cout << idx+1 << " " << max;
}

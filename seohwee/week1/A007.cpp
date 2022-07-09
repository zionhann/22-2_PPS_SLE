#include <iostream>

using namespace std;

int main(void){
    int answer[8];
    int count=0;

    for(int i=0; i<8; i++){
        cin >> answer[i];
    }

    for(int j=0; j<7; j++){
        if(answer[j] < answer[j+1]){
            count++;
        }
    }

    if(count == 7) cout << "ascending";
    else if(count == 0) cout << "descending";
    else cout << "mixed";
}

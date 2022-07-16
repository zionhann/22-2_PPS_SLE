#include <iostream>

using namespace std;

int main(void){
    int num;
    int N;
    int answer=0;

    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> num;
        if(num >= 1){
            if(i != N) answer+=num-1;
            else answer+=num;
        }
    }
    cout << answer << "\n";
}

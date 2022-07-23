#include <iostream>
#include <queue>

using namespace std;

queue<int> que;
int N;

int main(void){
    cin >> N;

    for(int i=1; i<=N; i++){
        que.push(i);
    }

    while(que.size() != 1){
        que.pop();
        que.push(que.front());
        que.pop();
    }
    cout << que.front();
}

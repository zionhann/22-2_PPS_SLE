#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    int temp;
    for(int i = 0; i < n; i++){
        q.push(i+1);
    }
    while(1){
        if(q.size()==1){
            cout << q.front();
            break;
        }
        q.pop();
        
        temp= q.front();
        q.pop();
        q.push(temp);
    }

}
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int k;
    cin >> k;
    int n;
    int sum = 0;
    stack<int> num;
    for(int i = 0; i < k; i++){
        cin >> n;
        if(n == 0){
            sum -=num.top();
            num.pop();
        }
        else{
            num.push(n);
            sum +=n;
        } 

    }
    cout << sum;
}
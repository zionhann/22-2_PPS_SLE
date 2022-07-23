#include <iostream>

using namespace std;

int main(void){
    int num;
    int count[42]={0};
    int result=0;

    for(int i=0; i<10; i++){
        cin >> num;
        count[num % 42]++;
    } 
    
    for(int num : count){
        if(num > 0) result++;
    }
    cout << result;
}

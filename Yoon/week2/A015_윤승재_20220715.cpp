#include <iostream>

using namespace std;

int main(){
    int num;
    int x[5];
    int sum = 0;
    

    for(int i = 0; i < 5; i++){
        cin >> num;
        x[i] = num % 10;

    }
    
    for(int i = 0; i < 5; i++){
        sum += x[i] * x[i];

    }
    cout << (sum % 10);


}
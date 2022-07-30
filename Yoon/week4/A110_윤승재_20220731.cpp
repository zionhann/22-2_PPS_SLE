#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n; 
    int re = 1000 - n;
    int count = 0;
    int temp;
    if(re >= 500){
        re -=500;
        count++;
    } 
    if(re >= 100){
        temp = re / 100;
        count += temp;
        re -=temp * 100;
    }
    if(re >= 50){
        re -=50;
        count++;
    }
    if(re >= 10){
        temp = re / 10;
        count += temp;
        re -=temp * 10;
    }
    if(re >= 5){
        re -=5;
        count++;
    }
    if(re >= 1){
        count += re;
    }
    cout << count;

}
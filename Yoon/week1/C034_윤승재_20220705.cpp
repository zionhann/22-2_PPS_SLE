#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    a = 0;
    int c = 0;//while 벗겨내기 위한 장치
    while(1){
       for(b = 0;b<=1000;b++){
        
            if(5*b == n - 3*a){
                cout  << a+b;
                c = 1;
                break;
            }
        }
        
        if(n - 3*a < 0){
            cout << "-1";
            break;
        }
        a++; 
        if(c==1)break;
    }
    
    
}
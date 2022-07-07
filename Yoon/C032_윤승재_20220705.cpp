#include <iostream>

using namespace std;

int main(){
    int room;
    int k=0;
    int cov=1;
    cin >> room;
    while(1){
        if(room > cov){
            k++;
            cov += 6*k;
            
        }
        else{
            cout << k+1;
            break;
        }
    }
    
    
}
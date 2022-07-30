#include <iostream>
using namespace std;

int main(){
    int k;
    int t;
    cin >> t;
    int *cur = new int[t]();
    for(int j = 0; j < t; j++){
        cin >> k;
        for(int i = 0; i < k; i++){
            
            cur[j] *=2;
            cur[j] +=1;

        }
    }
    for(int j = 0; j < t; j++){
        cout << cur[j] << "\n"; 
            
    }

    
}
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int w,x,n;
    int count;

    for(int i = 0;i < t;i++){
        cin >> x >> w >> n;
        count = 1;
        if(n <= x){
            cout << n << "01" <<endl;
        }
        else{
            while(1){
                n = n - x;
                count++;
            
                
                if(n <= x && count < 10){
                    cout << n << "0" << count <<endl;
                    break;
                }
                if(n <= x && count >= 10){
                    cout << n << count <<endl;
                    break;
                }
            }
        }
    }
}
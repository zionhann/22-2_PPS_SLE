#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first;
    cin >> first;
    int a[5]= {0,};
    if(n > 5){
        cout << "Love is open door";
    }
    else{
        for(int i = 1; i < n; i ++){
        
            if(first == 0){
                if(i%2==1){
                    a[i] = 1;
                }
            }
            else if(first == 1){
                if(i%2==0){
                    a[i] = 1;
                }

            }
            cout << a[i] <<"\n";
        }
    }
    
}
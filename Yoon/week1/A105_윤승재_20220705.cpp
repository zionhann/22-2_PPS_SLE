#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = -1;//대각선방향이 좌하향인지 우상향인지.
    int k = 1;
    int a,b;
    for(int i = 1; i <= 10001628;i += k ){
        if(n == 1){
            a = 1;
            b = 1;
            cout << a << "/" << b;
            break;
        }
        else if(n == i){
            if(count == 1){
                a = k;
                b = 1;
                cout << a << "/" << b;
                break;
            }
            else if(count == -1){
                a = 1;
                b = k;
                cout << a << "/" << b;
                break;
            }
        }
        if(n < i){
            int m = n - (i-k) - 1;
            if(count == 1){
                a = 1;
                b = k;
                for(int j = 0; j<m;j++){
                    a++;
                    b--;
                }
                cout << a << "/" << b;
                break; 
            }
            else if(count == -1){
                a = k;
                b = 1;
                for(int j = 0; j<m;j++){
                    a--;
                    b++;
                }
                cout << a << "/" << b;
                break;
            }
        }
        count = (-1)*count;
        k++;
    }
}
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[10];
    int high1;
    int c1;
    int high2;
    int c2;
    int high3;
    int c3;
    int sum = 0;
    for(int i = 0; i < t; i++){
        high1 = 0;
        high2 = 0;
        high3 = 0;
        c1 = 0;
        c3 = 0;
        c2 = 0;
        for(int j = 0; j < 10; j++){
            cin >> a[j];
        }

        for(int i = 0; i < 10; i++){
            if(a[i] >= high1){
                high1 = a[i];
                c1 = i;
            }
        }
        for(int i = 0; i < 10; i++){
            if(i == c1)continue;
            if(a[i] >= high2 && a[i] <= high1){
                high2 = a[i];
                c2 = i;
            }
        }

        for(int i = 0; i < 10; i++){
            if(i == c1 || i == c2)continue;
            if(a[i] >= high3 && a[i] <= high2){
                high3 = a[i];
                c3 = i;
            }
        }
        cout << high3 <<"\n";


    }

}
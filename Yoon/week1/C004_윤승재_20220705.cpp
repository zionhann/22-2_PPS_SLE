#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    int a = 1;
    int copy;
    int part = 0;

    for(int j = 0; j < n; j++){
        copy = a;
        part = 0;
        while(copy){
            part += copy%10;
            copy /= 10;
        }
        if(part + a == n){
            cout << a; 
            return 0;
        }
        a++;
        

    }
    cout << "0";
}
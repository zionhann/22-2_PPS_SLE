#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int y = 0;
    int m = 0;
    int time;
    for(int i = 0; i < n; i++){
        cin >> time;    
        y += (time/30 + 1);
        m += (time/60 + 1);
    }
    if(y * 10 >m * 15){
        cout << "M ";
        cout << m * 15;
    }
    else if(y * 10 <m * 15){
        cout << "Y ";
        cout << y * 10;

    }
    else{
        cout << "Y M "<<m*15;
    }
}
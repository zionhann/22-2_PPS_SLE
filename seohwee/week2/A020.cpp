#include <iostream>

using namespace std;

int main(void){
    int s=0;
    int max=0;
    int num1, num2;

    for(int i=0; i<4; i++){
        cin >> num1 >> num2;
        s = s - num1 + num2;

        if(s > max) max = s;
    }
    cout << max;
}

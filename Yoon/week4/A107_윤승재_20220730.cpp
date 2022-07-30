#include <iostream>
using namespace std;

int main(){
    int n[1000] = {0,};

    int a,b;
    cin >> a >> b;
    int i = 0;
    int num = 1;
    int sum = 0;
    while(1){
        for(int j = 0; j < num; j++){
            n[i] = num;
            i++;
            if(i == 1000)break;
        }
    if(i == 1000)break;

        num++;
    }
    for(int j = a-1; j <= b-1; j++){
        sum += n[j];
    }
    cout << sum;

}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int first;
    int second;
    int third;
    int copy;
    for(int i = 0; i < n; i++){
        copy = i+1;
        if(copy/100 == 0)count++;
        else{
            first = copy/100;
            copy %=100;
            second = copy/10;
            copy %=10;
            third =copy;
            if(first - second == second - third)count ++;
            
        }


    }
    cout << count;

}
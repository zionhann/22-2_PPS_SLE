#include <iostream>

using namespace std;

int main(){
    int n[8];
    int count1 = 0;
    int count2 = 8;
    for(int i = 0; i < 8; i++){
        cin >> n[i];
    }

    for(int i = 0; i < 8; i++){
        if(n[i] == i+1){
            count1 ++;

        }


    }
    for(int i = 0; i < 8; i++){
        if(n[i] == 8-i){
            count2--;

        }


    }
    if(count1==8){
        cout << "ascending";
    }
    else if(count2==0){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }
}
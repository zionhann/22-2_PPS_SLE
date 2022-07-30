#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n;
    int copy;
    int size;
    int sum;
    int time;
    int check;
    for(int i = 0; i < t; i++){
        cin >> n;
        copy = n;
        sum = 0;    
        copy /= 10;
        check = 0;
        if(copy < 1){
            size = 1;
        }
        else if(copy < 10){
            size = 2;
        }
        else if(copy < 100){
            size = 3;
        }
        else if(copy < 1000){
            size = 4;
        }
        else if(copy < 10000){
            size = 5;
        }
        else size = 6;
        copy=n;
        int *arr1 = new int[size];
        for(int i = 0; i < size; i ++){
            arr1[size - i - 1] = copy % 10;
            copy /= 10;
        }
        copy = 0;
        for(int i = 0; i < size; i ++){
            time= 1;
            for(int j = 0; j < i; j++){
                time *= 10;
            }
            copy += arr1[i]*time;

        }
        sum = copy + n;
        copy = sum;
        copy /= 10;
        if(copy < 1){
            size = 1;
        }
        else if(copy < 10){
            size = 2;
        }
        else if(copy < 100){
            size = 3;
        }
        else if(copy < 1000){
            size = 4;
        }
        else if(copy < 10000){
            size = 5;
        }
        else if(copy < 100000){
            size = 6;
        }
        else size = 7;
        copy = sum;
        int *arr2 = new int[size];
        for(int i = 0; i < size; i ++){
            arr2[i] = copy % 10;
            copy /= 10;
        }
        for(int i = 0; i < size; i ++){
            if(arr2[i] == arr2[size - i - 1])continue;
            else {
                check++;
                break;
            }
        }
        if(check == 0)cout << "YES" << "\n"; 
        if(check == 1)cout << "NO" << "\n"; 
    }

}
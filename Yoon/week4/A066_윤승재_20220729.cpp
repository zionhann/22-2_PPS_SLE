#include <iostream>
#include <algorithm>
using namespace std;
bool desc(int a, int b){ 
  return a > b; 
} 
int main(){
    int n;
    cin >> n;
    int arr[10];
    int i = 0;
    while(1){
        if(n < 10){
            arr[i] = n;
            break;
        }
        arr[i] = n % 10;
        n /= 10;    
        i++;
        
    
    }
    sort(arr,arr + i+1,desc);

    for(int j = 0; j <= i; j++){
        cout <<arr[j];
    }

}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *num = new int[n];
    // int *check = new int[n]();
    int sum = 0;
    int min = 4000;
    int max = -4000;
    
    int avg;
    int maxcount = 0;
    int center;
    int count = 0;
    int freq;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        sum += num[i];
        if(max <= num[i])max = num[i];
        if(min >= num[i])min = num[i];
    }
    
    if((float)sum/n>0.0)avg = (float)sum/n + 0.5; //나눗셈 연산할때 타입중요..!! sum을 int로 하니까 에러가생겼구나,, typecasting 애용.
    else if((float)sum/n < 0.0)avg = (float)sum/n - 0.5;
    else avg = 0;
    cout << avg <<"\n";

    sort(num,num + n);
    center = num[(n-1)/2];
    
    cout << center <<"\n";
   
   
   //sssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss
    int *ara = new int[max-min+1]();
    

    for(int i = 0; i < n; i++){
    
        ara[num[i]-min]++;
    }
    for(int i = 0; i < n; i++){
        if(maxcount < ara[num[i]-min]){
            maxcount = ara[num[i]-min];
        }
    } 
    for(int i = 0 ; i < n; i++){
        if(maxcount == ara[num[i]-min]){
            if(freq == num[i])continue;
            count++;
            freq = num[i];
            if(count == 2){

                break;
            }
        }
    }
    cout << freq <<"\n";

   //sssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss


    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(num[i] == num[j]){
    //             check[i] ++;
    //         }
    //     }
        
    //     if(maxcount < check[i]){
    //         maxcount = check[i];
    //     }
    // }
    
    

    cout << max - min;


}
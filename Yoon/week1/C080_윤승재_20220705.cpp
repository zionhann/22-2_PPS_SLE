#include <iostream>
using namespace std;

int main(){
    int n,m;
    int count = 0;
    int min1 = 64;
    int min2 = 64;
    int min = 64;
    cin >> n >> m;
    
    // char** arr = new char*[n]; 
    // for(int i = 0; i < n; i++) arr[i] = new char[m];
    char arr[50][50];
    string str;

    for(int i = 0; i < n; i++){
        cin >> str;
        for(int j = 0; j < m; j++){
            arr[i][j] = str[j];        
        }
    }

    for(int i = 0; i < n - 7; i++){ //8X8 묶음 생각했을때 가장 좌상단에 있는 체스판의 번호
        for(int j = 0 ; j < m - 7; j++){
            count = 0;
            for(int a = i ; a < i + 8 ; a++){
                for(int b = j; b < j + 8 ; b++){
                    if(((a-i) % 2) == ((b-j) % 2)){ //둘다짝수거나 둘다홀수인거만 찾으면 체스판규칙임.
                        if(arr[a][b] != 'B'){
                            count ++;
                        }
                    }
                    else{
                        if(arr[a][b] != 'W'){
                            count ++;
                        }
                    }
                }
            }
            //if(min1 > count)  
            min1 = count;
            count = 0;
            for(int a = i; a < i + 8 ; a++){
                for(int b = j; b < j + 8 ; b++){
                    if(((a-i) % 2) == ((b-j) % 2)){
                        if(arr[a][b] != 'W'){
                            count ++;
                        }
                    }
                    else{
                        if(arr[a][b] != 'B'){
                            count ++;
                        }
                    }
                }
            }
            min2 = count;
            
            if(min1 <= min2 && min1 <= min)min = min1;
            else if(min2 <= min1 && min2 <= min)min = min2;

        }
    }
    cout << min;
   
}

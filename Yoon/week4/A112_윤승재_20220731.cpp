#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int *bsix = new int[m];
    int *bone = new int[m];
    int sum;
    int min6 ;
    int min1;
    for(int i = 0; i < m; i++){
        cin >> bsix[i] >> bone[i];

    }
    // min = sum[0];
    min6 = bsix[0];
    min1 = bone[0];
    for(int i = 1; i < m; i++){
        if(min6 > bsix[i]){
            min6 = bsix[i];
        }
        if(min1 > bone[i]){
            min1 = bone[i];
        }
    }
   


    if( min6 >= 6*min1){
        if(((n/6)+1)*min6 < n*min1){
            sum = ((n/6)+1)*min6;
        }
            else sum =n*min1;
        }
    else{
        if(((n/6)+1)*min6 < (n/6)*min6 + (n%6)*min1){
            sum = ((n/6)+1)*min6;
        }
        else sum = (n/6)*min6 + (n%6)*min1;

    }
    cout << sum;
}
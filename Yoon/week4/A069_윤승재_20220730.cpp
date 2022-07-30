#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int count = n;
    int *arr = new int[n]();
    int i = 0;
    cout << "<";
    while(1){
        for(int j = 0; j < k; j++){
            if(i==n)i = 1;
            else i++;
            while(1){
                if(arr[i-1]== 1){
                    if(i==n)i = 1;
                    else i++; 
                }
                else break;
            }
        }
        
        
        arr[i-1] = 1;
        cout << i;
        count --;
        if(count == 0)break;
        else cout << ", ";
    }
    cout << ">";

}
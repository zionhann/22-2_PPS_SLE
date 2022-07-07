#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    int sum = 0;
    int max = 0;
    int *array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int a = 0; a < n-2; a++){
        for(int b = a+1; b < n-1; b++){
            for(int c = b+1; c < n; c++){
                sum = array[a] + array[b] + array[c];
                if(sum > max && sum <= m){
                    max = sum;
                }
            }
        }
    }
    cout << max;


}
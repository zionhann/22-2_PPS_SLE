#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;
    int b;
    b = a.length();
    int c = b/10;
    int d = b%10;
    int e = 0;
    for(int i = 0; i < c; i++){
        for(int j = e * 10 + 0; j < e * 10 + 10; j++){
            if( j !=9 + e*10)cout << a[j];
            else cout << a[j] << "\n";
        }
        e++;
    }    

    
    if(d != 0){
        for(int i = e * 10 + 0; i < d + e * 10; i++){
            cout << a[i];
        }
    }
}

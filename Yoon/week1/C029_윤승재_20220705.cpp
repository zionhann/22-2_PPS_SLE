#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int k=1;
    if(b>=c){
        cout << "-1";
    }
    else{
        int k = a/(c-b);
        //if(k == a/(c-b)){
            cout << k+1;
        //}
        
    }


}
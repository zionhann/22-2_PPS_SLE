#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(a[i] > 67)
        a[i] = a[i] - 3;
        else
        a[i] = a[i] -3 +'Z'-'A'+1;
    }
    for(int i = 0; i < a.length(); i++){
        cout << a[i];

    }
}
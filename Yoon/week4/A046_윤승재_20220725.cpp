#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a;
    char b;
    int count[27] = {0,};
    int doublecheck = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        b = a[0];

        for(int j = 97; j <123;j++ ){
            if((int)b == j ){
                count[j-'a']++;

                break;
            }
        }
    }

    for(int i = 0; i < 27; i++){
        if(count[i] >=5){
            cout << (char)(i+'a');
            doublecheck++;
        }

    }
    if(doublecheck == 0){
        cout << "PREDAJA";
    }
}
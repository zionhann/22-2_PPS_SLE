#include <iostream>
using namespace std;

int main(){
    int s[8];
    int low1 = 150;
    int c1;
    int low2 = 150;
    int c2;
    int low3 = 150;
    int c3;
    int sum = 0;
    for(int i = 0; i < 8; i++){
        cin >> s[i];

    }

    for(int i = 0; i < 8; i++){
        if(s[i] <= low1){
            low1 = s[i];
            c1 = i;
        }
    }
    for(int i = 0; i < 8; i++){
        if(i == c1)continue;
        if(s[i] <= low2 && s[i] >= low1){
            low2 = s[i];
            c2 = i;
        }
    }

    for(int i = 0; i < 8; i++){
        if(i == c1||i == c2)continue;

        if(s[i] <= low3 && s[i] >= low2){
            low3 = s[i];
            c3 = i;
        }
    }

    for(int i = 0; i < 8; i++){
        if(i == c1 || i == c2 || i == c3)continue;
        sum += s[i];
    }
    cout << sum << "\n";
    for(int i = 0; i < 8; i++){
        if(i == c1 || i == c2 || i == c3)continue;
        
        cout << i+1 << " ";

    }

}
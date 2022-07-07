#include <iostream>
#include <string>

using namespace std;

int main(){
    string code;
    getline(cin,code);
    int count = 0;
    int mode = 0;

    for(int i=0; i<code.length();i++){
        if(mode == 4 && code[i] == '='){
            count--;//바로 전 문자열에서 모드1받고 z는 카운트세줬기에 ,,,
            mode = 0;
        }
        if(code[i] == '=' || code[i] == '-'){
            mode =0;
            continue;
        }
        else if(code[i] == 'd'){
            mode = 1;
            count++;
            continue;
        }
        else if(code[i] == 'l'){
            mode = 2;
            count++;
            continue;
        }
        else if(code[i] == 'n'){
            mode = 3;
            count++;
            continue;
        }
        else if(mode == 1 && code[i] == 'z'){
            mode = 4;//뒤에 =이 와야만 하나로봄
            count++;
            continue;
        }
        else if(mode == 2 && code[i] == 'j'){
            mode = 0;
            continue;
        }
        else if(mode == 3 && code[i] == 'j'){
            mode = 0;
            continue;
        }
        else{
            mode = 0;
            count++;
        } 

    }

    cout << count;
}
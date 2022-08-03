#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b = "aeiou";
    int count;
    int check;
    int three1;
    int three2;
    int rule2_1;
    int rule2_2;
    char pre;
    int rule3;
    int rule3_1;
    while(1){
        cin >> a;
        count = 0;
        check = 0;
        three1 = 0;
        three2 = 0;
        rule2_1 = 0;
        rule2_2 = 0;
        rule3 = 0;
        rule3_1 = 0;
        pre = a[0];
        if(a == "end")break;
        for(int i = 0; i < a.length(); i++){
            check = 0;
            for(int j = 0; j < 5; j++){
                if(a[i] == b[j]){
                    count++;   
                    check++;
                }
            }
            if(check == 1){
                three1++;
                    if(three1 == 3){
                    rule2_1 = 1;
                }
            }
            else three1 = 0;
            if(check == 0){
                three2++;
                    if(three2 == 3){
                    rule2_2= 1;
                }
            }
            else three2 = 0;
        }
        for(int i = 1; i < a.length(); i++){
            
            if(a[i] == pre){
                if(a[i] == 'e' || a[i] == 'o'){
                    rule3++;
                    if(rule3 == 2){
                        rule3_1 = 1;

                        break;
                    }
                }
                else {
                    rule3_1 = 1;

                    break;
                }
            }
            else rule3 =0;

            pre = a[i];
        }
        if(count == 0){
            cout <<"<"<<a<<"> is not acceptable.\n";
            continue;
        }
        if(rule2_1 == 1 || rule2_2 == 1){
            cout <<"<"<<a<<"> is not acceptable.\n";
            continue;
        }
        if(rule3_1 == 1){
            cout <<"<"<<a<<"> is not acceptable.\n";
            continue;
        }
        else
            cout <<"<"<<a<<"> is acceptable.\n";

    }


}


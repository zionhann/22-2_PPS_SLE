#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    string s;
    int small;
    int big;
    int exitcode;
    while(1){
        stack<int> con;

        small = 0;
        big = 0;
        exitcode = 0;
        getline(cin,s);
        if(s[0] == '.')break;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                small++;
                con.push(0);
            }
            if(s[i] == ')'){
                small--;

                if(small < 0){
                    cout <<"no\n";
                    exitcode++;
                    break;
                }
                if(con.top() == 1){
                    cout << "no\n";
                    exitcode++;
                    break;
                }
                con.pop();

            }
            if(s[i] == '['){
                con.push(1);

                big++;
            }
            if(s[i] == ']'){
                big--;

                if(big < 0){
                    cout <<"no\n";
                    exitcode++;
                    break;
                }
                if(con.top() == 0){
                    cout << "no\n";
                    exitcode++;
                    break;
                }
                con.pop();

            }
        }
        if(exitcode !=0)continue;

        if(small == 0 && big == 0)cout << "yes\n";
        else cout << "no\n";



    }

}
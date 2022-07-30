#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main (){
    int n;
    cin >> n;
    int x;
    string a;
    stack<int> s;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == "push"){
            cin >> x;
            s.push(x);
        }
        if(a == "top"){
            if(s.empty()){
                cout << "-1" << "\n";
            }
            else cout << s.top() << "\n";
        }
        if(a == "size"){
            cout << s.size() <<"\n";
        }
        if(a == "empty"){
            if(s.empty())cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        if(a == "pop"){
            if(s.empty()){
                cout << "-1" << "\n";
            }
            else {
                cout << s.top() << "\n";
                s.pop() ;
            
            }
        }
    }
}
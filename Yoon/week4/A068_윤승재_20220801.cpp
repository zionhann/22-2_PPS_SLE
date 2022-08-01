#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    string a;
    queue<int> s;
    for(int i = 0; i < n; i++){
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        cin >> a;
        if(a == "push"){
            cin >> x;
            s.push(x);
            continue;
        }
        
        if(a == "size"){
            cout << s.size() <<"\n";
            continue;
        }
        if(a == "empty"){
            if(s.empty())cout << "1" << "\n";
            else cout << "0" << "\n";
            continue;
        }
        if(a == "pop"){
            if(s.empty()){
                cout << "-1" << "\n";
            }
            else {
                cout << s.front() << "\n";
                s.pop() ;
            
            }
            continue;
        }
        if(a == "front"){
            if(s.empty()){
                cout << "-1" << "\n";
            }
            else {
                cout << s.front() << "\n";
            
            }
            continue;
        }
        if(a == "back"){
            if(s.empty()){
                cout << "-1" << "\n";
            }
            else {
                cout << s.back() << "\n";
            
            }
            continue;
        }
    }

}
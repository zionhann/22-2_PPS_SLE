#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, y1, r1, x2, y2, r2;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++ ){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1 == x2 && y1 == y2 && r1 == r2){
            cout <<"-1\n";
            continue;
        }
        // if(x1 == x2 && y1 == y2 && r1 != r2){
        //     cout <<"0\n";
        //     continue;
        // }
        if(sqrt(pow(x2-x1,2) + pow(y2 - y1,2)) == r2 +r1 || sqrt(pow(x2-x1,2) + pow(y2 - y1,2)) == abs(r2-r1)){
            cout << "1\n";
            continue;
        }
        if(sqrt(pow(x2-x1,2) + pow(y2 - y1,2)) > r2 +r1 ||sqrt(pow(x2-x1,2) + pow(y2 - y1,2)) < abs(r2-r1) ){
            cout << "0\n";
            continue;
        }
        if(sqrt(pow(x2-x1,2) + pow(y2 - y1,2)) < r2 + r1 && sqrt(pow(x2-x1,2) + pow(y2 - y1,2)) > abs(r2-r1)){
            cout << "2\n";
            continue;
        }
       
    
    }
    
    


}
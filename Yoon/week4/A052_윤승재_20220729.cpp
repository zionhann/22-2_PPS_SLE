#include <iostream>
#include <string>
using namespace std;

int main (){
    int n;
    cin >> n;
    string a;
    int count;
    int sum;
    for(int j = 0; j < n; j++){
        cin >> a;
        sum = 0;
        count = 0;
        for(int i = 0; i < a.length(); i++){
            if(a[i] == 'O')count ++;
            else count = 0;
            sum += count;
        }
        cout << sum << "\n";
    }
    
    
    
    
    
    

}
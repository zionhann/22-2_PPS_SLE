#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    vector <int> a(50);
    vector <int> b(50);
    vector <int> c(50,1);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(a[i] < a[j] && b[i] < b[j]){
                c[i]++;
            }
        }
        
    }
    for(int i = 0; i < n; i++){
        cout << c[i] << " ";
    }
    

}
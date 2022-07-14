#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    float count = 0;
    float check = 0;
    float *a = new float[t];
    float *c = new float[t];
    
    for(int i = 0; i < t; i++){
        cin >> n;float *b = new float[n];
        for(int j = 0; j < n; j++){
            cin >> b[j];
            check += b[j];
        }
        a[i] = (check/n);
        check = 0;
        for(int j = 0; j < n; j++){
            if(a[i] < b[j])count++;
        }
        c[i] = count*100.0/(float)n;
        count = 0;
    }

    for(int i = 0; i < t; i++){
        cout << fixed;
        cout.precision(3);
        cout << c[i] << "%\n";
    }
}
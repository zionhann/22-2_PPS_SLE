#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int n, N;
    double m[4];
    double h=0, s=0;
    double temp1,temp2;

    cin >> N >> n;
    cin >> m[0] >> m[1] >> m[2] >> m[3];
    if(n == 0){
        h = m[0];
        s = m[1];
    }
    else if(n == 1){
      h = m[2];
      s = m[3];
    }

    for(int i=0 ; i < N-1 ; i++){
      temp1 = h*m[0] + s*m[2];
      temp2 = s*m[3] + h*m[1];
      h = temp1;
      s = temp2;
    } 

    h = h*1000;
    s = s*1000;
    
    cout << (int)h << "\n";
    cout << (int)s << "\n";
}

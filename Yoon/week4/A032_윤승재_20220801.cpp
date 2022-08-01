#include <iostream>
using namespace std;

int re(int a, int b){
     if(a == 0) return b;
     if(b == 1) return 1;

     else return re(a-1,b) + re(a,b-1);
}

int main(){
     int t;
     cin >> t;
     int k,n;
     int total;
     for(int i = 0; i < t; i++){
          total = 0;
          cin >> k >> n;
          total = re(k,n);
          cout << total <<"\n";
     }

}

#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main(void) {
 
    int N;
    cin >> N;
    double n;
    char ch;
 
    for(int i=0; i<N; i++){
    cin >> n;
 
    while(1){
        cin.get(ch);
        if(ch =='\n')break;
        if(ch =='@')n *= 3;
        if(ch =='%')n += 5;
        if(ch =='#')n -= 7;
    }
    cout << fixed;
    cout.precision(2);
    cout << n << "\n";
    }
}

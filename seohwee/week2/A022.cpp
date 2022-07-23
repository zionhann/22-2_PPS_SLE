#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n, y=0, m=0, t;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> t;

        y += 10 * (t/30 + 1);
        m += 15 * (t/60 + 1);
    }

    if(y < m) cout << "Y ";
    else if(y==m) cout << "Y M ";
    else cout << "M ";

    cout << min(y, m);
}

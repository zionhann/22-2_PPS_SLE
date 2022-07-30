#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int sum;
    for(int i = 0; i < n; i++){
        cin >> s;
        sum = 0;
        int alph[26] = {0,};

        for(int j = 0; j < 26; j++){
            for(int k = 0; k < s.length(); k++){
                if(s[k] == j+65){
                    alph[j]++;
                }
            }
            if(alph[j] == 0){
                sum += (j+65);
            }

        }
        cout << sum << "\n";
    }

}
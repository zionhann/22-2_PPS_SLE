#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int mode = 1;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        for(int j = 0;j < word.length();j++){
            if(j==0){
                mode = 0;
                continue;
            }
            if(word[j-1] != word[j]){
                for(int k = 0;k< j;k++){
                    if(word[j] == word[k]){
                        mode = 1;
                        break;
                    }
                }
            }
            
            if(mode == 1){
                count++;
                break;
            }

            
        }

    }
    cout << n-count;
}
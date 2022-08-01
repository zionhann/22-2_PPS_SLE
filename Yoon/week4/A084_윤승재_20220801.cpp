#include <iostream>
#include <string>
using namespace std;

int main(){
    int count;
    int check1;
    string s;
    cin >> s;
    string *a = new string[s.length()];

    for(int i = 0; i < s.length();i++){
        a[i] = s.substr(i, s.length() - i);
    }

    for(char j = 'a'; j <= 'z'; j++){
        count = 0;
        for(int i = 0; i < s.length(); i++){
            if(a[i][0] == j){
                count++;
                check1 = i;
            }
        }

        if (count == 0)continue;
        else if(count == 1){
            cout << a[check1] <<"\n";
        }

        else {
            string *same = new string[count];
            string temp;
            int time = 0;
            for(int i = 0; i < s.length(); i++){
                if(a[i][0] == j){
                    same[time] = a[i];
                    time ++;
                }
            }
            for(int i = 0; i < count -1; i++){
                for(int k = i+1; k < count; k++){
                    if(same[i].compare(same[k]) >  0){
                        temp = same[i];
                        same[i] = same[k];
                        same[k] = temp;
                    }
                }
            }
            for(int i = 0; i < count ; i++){
                cout << same[i] <<"\n";
            }


            // time = 0;
            // for(int i = 0; i < s.length(); i++){
            //     if(a[i][0] == j){
            //         a[i] = same[time];
            //         time ++;
            //         cout << a[i] <<
            //     }
            // }
            
            // for(int k = 0; k < s.length(); k++){
            //     if(a[k][0] == j && a[k][1] == '\0'){
            //         cout << a[k] << "\n";
            //     }  
            // }   
            // for(char l = 'a'; l <= 'z'; l++){
            //     for(int k = 0; k < s.length() ; k++){
            //         if(a[k][0] == j && a[k][1] == l){
            //             cout << a[k] << "\n";
            //         }
                    
            //     }
            // }

        }


    }


}
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string *a = new string[n];
    int count[50] = {0,};
    for(int i = 0; i < n; i++){
        cin  >> a[i];      
    }
    for(int i = 1; i < 51; i++){
        for(int j = 0; j < n; j++){
            if(a[j].length() == i){
                count[i-1] ++;   
            }
            else continue;
        }
    }
    for(int i = 1; i < 51; i++){
        if(count[i-1] == 0)continue;
        if(count[i-1] == 1 ){
            for(int j = 0; j < n; j++){
                if(a[j].length() == i){
                    cout << a[j] << "\n";
                }
            }
        }
        else if(count[i-1] > 1){
            string *cc = new string[count[i-1]];
            int *cnum = new int[count[i-1]]();
            int k = 0;
            for(int j = 0; j < n; j++){
                
                if(a[j].length() == i){
                    cc[k] = a[j];
                    k++;
                }
            }
            for(int l = 0; l < k; l++){
                for(int j = 0; j < i; j++){
                    if(cc[l][j] >=48 && cc[l][j] <=57){
                        cnum[l] += cc[l][j]-48;
                    }

                }
            }
            int temp;
            string temp1;

            for(int j = 0; j < count[i-1]-1; j++){
                for(int l = j + 1; l < count[i-1]; l++){
                    if(cnum[j] > cnum[l]){
                        temp = cnum[j];
                        cnum [j] = cnum[l];
                        cnum[l] = temp;
                        temp1 = cc[j];
                        cc[j] = cc[l];
                        cc[l] = temp1;
                    }
                    else if(cnum[j] == cnum[l]){
                        if(cc[j].compare(cc[l]) > 0){
                            temp1 = cc[j];
                            cc[j] = cc[l];
                            cc[l] = temp1;
                        }
                    }
                }
            }

            for(int j = 0; j < count[i-1]; j++){
                cout << cc[j] <<"\n";
            }
        }
    }

}
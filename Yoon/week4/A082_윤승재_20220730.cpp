#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *age = new int[n];
    string *name = new string[n];
    for(int i = 0; i < n; i++){
        cin >> age[i] >> name[i];
    }
    for(int j = 1; j <= 200; j++ ){
        for(int i = 0; i < n; i++){
            
            if(age[i] == j){
                cout << age[i] << " "<< name[i] << "\n";
            }
        }

    }


}

#include <iostream>
#include <vector>

using namespace std;

vector<string> v[201];

int main(void){
    int num;
    int age;
    string name;

    cin >> num;

    for(int i=0; i<num; i++){
        cin >> age;
        cin >> name;
        v[age].push_back(name);
    }
    for(int i=0; i<201; i++){
        for(int j=0; j<v[i].size(); j++){
            cout << i << ' ' << v[i][j] << '\n';
        }
    }  
}

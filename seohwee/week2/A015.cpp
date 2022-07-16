#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char*argv[]){
    int num, answer=0;

    for(int i=0; i<5; i++){
        cin >> num;
        answer += pow(num, 2);
    }

    answer = answer % 10;
    cout << answer << endl;
}

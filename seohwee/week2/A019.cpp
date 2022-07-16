#include <iostream>

using namespace std;

int main(void){
    int str1, str2, str3;
    int arr[10]={0};
    int mul;

    cin >> str1 >> str2 >> str3;
    mul = str1 * str2 * str3;

    while(mul != 0){
        arr[mul % 10] += 1;
        mul /= 10;
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << endl;
    }
}

#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    string *first = new string[n-m+1];
    string *second = new string[n-m+1];
    int *firstcheck = new int[n - m + 1];
    string a[10];
    a[0] = "zero";
    a[1] = "one";
    a[2] = "two";
    a[3] = "three";
    a[4] = "four";
    a[5] = "five";
    a[6] = "six";
    a[7] = "seven";
    a[8] = "eight";
    a[9] = "nine";
    string mark = "a";
    int k;
    for(int i = 0; i <= n - m; i++){
        if(i + m < 10){
            first[i] = a[(i+m)%10];//first[i] = a[m];  왜 이렇게 했을떈 못받아먹은거지? 아 i가 계속 변하는구나 그래서 10을 초과해버리는상황이오면 할당못받는거..
            first[i] = first[i] +'\0';

            firstcheck[i] = i + m;
        }
        else if(i + m >= 10){
            first[i] = a[(i+m)/10];
            second[i] = a[(i+m)%10];
            first[i] = first[i] + second[i];
            firstcheck[i] = i + m;

        }
    }
    string temp1;
    int temp;
    for(int i = 0; i < n - m; i++){
        for(int j = i + 1; j <=n - m; j++){
            if(first[i].compare(first[j]) > 0){
                temp1 = first[i];
                first[i] = first[j];
                first[j] = temp1;
                temp = firstcheck[i];
                firstcheck[i] = firstcheck[j];
                firstcheck[j] = temp;
            }

        }
    }
    for(int i = 0; i <= n - m; i++){
        if(i % 10 == 9){
        cout << firstcheck[i] << "\n";

        }
        else{
            cout << firstcheck[i] << " ";

        }


    }
    


}


#include <bits/stdc++.h>
using namespace std;

int main() {
    string A;
    string B;
    cin >> A >> B;
    int sizeA = A.length()-1;
    int sizeB = B.length()-1;
    int sum = 0;
    int carry = 0;
    string answer = "";

    while(1) {
        if(sizeA < 0 && sizeB < 0) break;
        sizeA < 0 ? sum : sum+= A[sizeA--] - '0';
        sizeB < 0 ? sum : sum+= B[sizeB--] - '0';

        carry = sum / 10;
        answer.push_back(sum % 10 +'0');
        carry == 1 ? sum = 1 : sum = 0;
    }
    if(carry == 1) answer.push_back(1 +'0');
    
    for(int i = answer.length()-1 ; i > -1; i--) {
        cout << answer[i];
    }
}
#include <iostream>

using namespace std;

int main(void){
    int A[10];
    int T;
    int N;
    int temp;
    int count=0;
    int answer[1000];

    cin >> T; 
    for(int i=0; i<T; i++){
        for(int j=0; j<10; j++){
            cin >> A[j];
        }
        int s=10;
        for(int k=0; k<s; k++){
            for(int l=0; l<s; l++){
                if(A[k] > A[l]){
                    temp = A[k];
                    A[k]=A[l];
                    A[l]=temp;
                }
            }
        }
        answer[count] = A[2];
        count++;
    }
  
    for(int i=0; i<T; i++){
        cout << answer[i] << "\n";
    }
}

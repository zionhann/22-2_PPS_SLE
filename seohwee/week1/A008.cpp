#include <iostream>

using namespace std;

int main(void){
    int C;
    int N;
    int score[1000] = {0};
    int mean;
    double answer;
    
    cin >> C;

    for(int i=0; i<C; i++){
        cin >> N;
        int sum=0;
        for(int j=0; j<N; j++){
            cin >> score[j];
            sum+=score[j];
        }
        mean = sum / N;
        double count = 0;
        for(int j=0; j<N; j++){
            if(mean < score[j]) count++;
        }
        answer = (double) (count / N) * 100;
        cout << fixed;
        cout.precision(3);
        cout << answer << "%" << endl;
    }
    return 0;
}

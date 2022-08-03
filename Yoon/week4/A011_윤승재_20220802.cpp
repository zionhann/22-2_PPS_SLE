#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    float *arr = new float[N]();
    float *clr = new float[N]();
    float *per = new float[N];
    int *sort = new int[N];
    int temp1;
    float temp2;
    for(int j = 0; j < N; j++){
        sort[j] = j+1;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < stages.size(); j++){
            if(stages[j] >= sort[i]){
                arr[i]++;
                if(stages[j] == sort[i])clr[i]++;
            }
        }
        if(arr[i] == 0)per[i] = 0;
        else per[i] = clr[i]/arr[i];
     
    }
    
    
    for(int i = 0; i < N -1; i++){
        for(int j = i+1; j < N; j++){
            if(per[i] < per[j]){
                temp1 = sort[i];
                sort[i] = sort[j];
                sort[j] = temp1;
                temp2 = per[i];
                per[i] = per[j];
                per[j] = temp2;
                
                
            }
            if(per[i] == per[j]){
                if(sort[i] > sort[j]){
                    temp1 = sort[i];
                sort[i] = sort[j];
                sort[j] = temp1;
                }
            }
        }

    }
    
    
    for(int i = 0; i < N; i++){
        answer.push_back(sort[i]);

    }
    
    
    
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int n = arr.size ();
    int temp;
    int k = 0;
    
    for(int i = 0; i < n ; i++){
        if(arr[i]%divisor == 0){
            answer.push_back(arr[i]);
            k++;
        }
            
    }
    sort(answer.begin(),answer.end());
    if(k == 0){
        answer.push_back(-1);
        return answer;
    }
    else return answer;
    
    
    

}
#include <string>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int number = 0;
    int tmp;
    
    tmp = x;    
    do
    {
        number += (tmp % 10);
        
        tmp /= 10;
    } while(tmp > 0);
    
    if(x % number == 0)
        answer = true;
    else
        answer = false;
    
    return answer;
}
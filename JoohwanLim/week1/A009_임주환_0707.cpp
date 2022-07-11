#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.length() != 4 && s.length() != 6)
        answer = false;
    else
    {
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(isdigit(s[i]) == 0)
            {
                answer = false;
                break;
            }
        }
    }
    return answer;
}
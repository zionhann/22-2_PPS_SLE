#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0 ;  i < s.length() ; i++)
    {
        if(i == 0 && isalpha(s[i]))
            s[i] = toupper(s[i]);
        
        if(i != 0 && s[i - 1] == ' ' && isalpha(s[i]))
            s[i] = toupper(s[i]);
        else if(i != 0 && isalpha(s[i]))
            s[i] = tolower(s[i]);
    }
    answer = s;
    
    return answer;
}
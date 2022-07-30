#include <string>
#include <iomanip>
using namespace std;

string solution(string s) {
    if(!isdigit(s[0])) s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++) {
        if(isdigit(s[i])) continue;
        if(isupper(s[i])) s[i] = tolower(s[i]);
        if(isspace(s[i-1]) && isalpha(s[i])) s[i] = toupper(s[i]);
    }
    return s;
}
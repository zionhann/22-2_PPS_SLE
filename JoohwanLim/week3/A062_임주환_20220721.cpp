#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int day = 0;
    
    if(a >= 1)
        day += b;
    if(a >= 2)
        day += 31;
    if(a >= 3)
        day += 29;
    if(a >= 4)
        day += 31;
    if(a >= 5)
        day += 30;
    if(a >= 6)
        day += 31;
    if(a >= 7)
        day += 30;
    if(a >= 8)
        day += 31;
    if(a >= 9)
        day += 31;
    if(a >= 10)
        day += 30;
    if(a >= 11)
        day += 31;
    if(a >= 12)
        day += 30;
    
    day %= 7;
    
    if(day == 1)
        answer = "FRI";
    if(day == 2)
        answer = "SAT";
    if(day == 3)
        answer = "SUN";
    if(day == 4)
        answer = "MON";
    if(day == 5)
        answer = "TUE";
    if(day == 6)
        answer = "WED";
    if(day == 0)
        answer = "THU";
    
    return answer;
}
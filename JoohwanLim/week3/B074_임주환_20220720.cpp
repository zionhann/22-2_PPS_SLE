#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    static int answer = 0;
    if(answer >= 500)
        return -1;
    else if(num == 1)
        return answer;
    else if(num % 2 == 0)
    {
        answer++;
        return solution(num / 2);
    }
    else
    {
        answer++;
        return solution(num * 3 + 1);
    }
}
#include <iostream>

using namespace std;

int main()
{
    string str;
    int answer = 0;

    cin >> str;

    for(int i = 0 ; i < str.length() ; i++)
    {
        int time = 2;
        if(str[i] >= 'A')
            time++;
        if(str[i] >= 'D')
            time++;
        if(str[i] >= 'G')
            time++;
        if(str[i] >= 'J')
            time++;
        if(str[i] >= 'M')
            time++;
        if(str[i] >= 'P')
            time++;
        if(str[i] >= 'T')
            time++;
        if(str[i] >= 'W')
            time++;
        
        answer += time;
    }

    cout << answer << endl;

    return 0;
}
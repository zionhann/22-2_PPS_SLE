#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    int answer = 0;

    cin >> str;

    for(int i = 0 ; i < str.length() ; i++)
    {
        if(i < str.length() - 1)
        {
            if(str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))
            {
                answer++;
                i++;
                continue;
            }
            if(str[i] == 'd' && str[i + 1] == '-')
            {
                answer++;
                i++;
                continue;
            }
            if(str[i] == 'l' && str[i + 1] == 'j')
            {
                answer++;
                i++;
                continue;
            }
            if(str[i] == 'n' && str[i + 1] == 'j')
            {
                answer++;
                i++;
                continue;
            }
            if((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=')
            {
                answer++;
                i++;
                continue;
            }
            if(i < str.length() - 2 && (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '='))
            {
                answer++;
                i += 2;
                continue;
            }
        }
        answer++;
    }
    cout << answer << '\n';

    return 0;
}
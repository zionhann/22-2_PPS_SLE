#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int answer = 0;
    bool check;

    cin >> n;
    vector <string> str(n);
    vector <bool> alpha(26, false);

    for(int i = 0 ; i < n ; i++)
        cin >> str[i];

    for(int i = 0 ; i < n ; i++)
    {
        check = true;
        for(int j = 0 ; j < str[i].length() ; j++)
        {
            if(j == 0)
            {
                alpha[str[i][j] - 'a'] = true;
                continue;
            }
            if(str[i][j] == str[i][j - 1])
                continue;
            if(alpha[str[i][j] - 'a'] == true)
            {
                check = false;
                continue;
            }
            alpha[str[i][j] - 'a'] = true;
        }
        if(check == true)
            answer++;

        alpha.clear();
        alpha.insert(alpha.begin(), 26, false);
    }

    cout << answer << '\n';

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    int n;

    cin >> n;
    vector <int> answer(n);
    for(int k = 0 ; k < n ; k++)
    {
        vector <bool> alpha(26, false);
        cin >> str;

        for(int i = 0 ; i < str.length() ; i++)
            if(alpha[str[i] - 'A'] == false)
                alpha[str[i] - 'A'] = true;

        for(int i = 0 ; i < 26 ; i++)
            if(alpha[i] == false)
                answer[k] += i + 'A';
                
    }
    for(int i = 0 ; i < n ; i++)
        cout << answer[i] << endl;

    return 0;
}
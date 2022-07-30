#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int tmp;

    cin >> n;
    vector <vector <int> > input(n);
    vector <int> answer(n);

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            cin >> tmp;
            input[i].push_back(tmp);
        }
        sort(input[i].begin(), input[i].end());
        answer[i] = input[i][7];
    }
    for(int i = 0 ; i < n ; i++)
        cout << answer[i] << '\n';

    return 0;
}
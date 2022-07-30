#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> quiz(8);
    vector <int> answer;
    vector <int> index(5);
    int sum = 0;

    for(int i = 0 ; i < 8 ; i++)
        cin >> quiz[i];

    answer = quiz;

    sort(answer.begin(), answer.end());
    reverse(answer.begin(), answer.end());

    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            if(answer[i] == quiz[j])
            {
                index[i] = j + 1;
                continue;
            }
        }
        sum += answer[i];
    }

    sort(index.begin(), index.end());
    cout << sum << '\n';
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << index[i];
        if(i < 4)
            cout << " ";

    }
        
    cout << '\n';

    return 0;
}
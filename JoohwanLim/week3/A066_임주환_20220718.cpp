#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    int tmp;
    vector <int> answer;
    
    cin >> x;

    while(x > 0)
    {
        tmp = x % 10;
        answer.push_back(tmp);
        x /= 10;
    }

    sort(answer.begin(), answer.end());
    reverse(answer.begin(), answer.end());

    for(int i = 0 ; i < answer.size() ; i++)
        cout << answer[i];
    cout << endl;

    return 0;
}
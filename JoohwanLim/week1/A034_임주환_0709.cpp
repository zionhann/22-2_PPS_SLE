#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    int mod;
    vector <int> answer;

    for(int i = 0 ; i < 10 ; i++)
    {
        cin >> x;
        mod = x % 42;

        answer.push_back(mod);
    }

    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    cout << answer.size() << endl;
    
    return 0;
}
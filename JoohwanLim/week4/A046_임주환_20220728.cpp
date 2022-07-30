#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector <int> name(26, 0);
    vector <char> basket;

    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        string player;

        cin >> player;

        name[player[0] - 'a']++;
    }

    for(int i = 0 ; i < 26 ; i++)
        if(name[i] >= 5)
            basket.push_back(i + 'a');

    if(basket.empty())
    {
        cout << "PREDAJA" << endl;
        return 0;
    }

    sort(basket.begin(), basket.end());

    for(int i = 0 ; i < basket.size() ; i++)
        cout << basket[i];
    cout << endl;

    return 0;
}
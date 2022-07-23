#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    int answer = 0;

    cin >> n >> k;

    vector <int> coin(n);

    for(int i = 0 ; i < n ; i++)
        cin >> coin[i];

    for(int i = coin.size() - 1 ; i >= 0 ; i--)
    {
        while(coin[i] <= k)
        {
            k -= coin[i];
            answer++;
        }
        if(k <= 0)
            break;
    }

    cout << answer << endl;

    return 0;
}
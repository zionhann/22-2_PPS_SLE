#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cin >> n;
    stack <int> money;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;

        if(x == 0)
            money.pop();
        else
            money.push(x);
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(money.empty())
            break;
            
        sum += money.top();
        money.pop();
    }
    cout << sum << endl;

    return 0;
}
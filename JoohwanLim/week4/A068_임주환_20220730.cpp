#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    int x;
    int i = 0;
    string cmd;
    queue <int> answer;

    cin >> n;

    while (i < n)
    {
        cin >> cmd;

        if(cmd == "push")
        {
            cin >> x;
            answer.push(x);
            i++;
        }
        if(cmd == "pop")
        {
            if(answer.empty())
                cout << -1 << '\n';
            else
            {
                cout << answer.front() << '\n';
                answer.pop();
            }
            i++;
        }
        if(cmd == "size")
        {
            cout << answer.size() << '\n';
            i++;
        }
        if(cmd == "empty")
        {
            if(answer.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
            i++;
        }
        if(cmd == "front")
        {
            if(answer.empty())
                cout << -1 << '\n';
            else
                cout << answer.front() << '\n';
            i++;
        }
        if(cmd == "back")
        {
            if(answer.empty())
                cout << -1 << '\n';
            else
                cout << answer.back() << '\n';
            i++;
        }
    }

    return 0;
}
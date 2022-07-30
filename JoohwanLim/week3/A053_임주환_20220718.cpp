#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int num;
    stack <int> answer;
    
    cin >> num;

    for(int i = 0 ; i < num ; i++)
    {
        string order;
        cin >> order;

        if(order == "push")
        {
            int x;
            cin >> x;
            answer.push(x);
        }
        else if(order == "pop")
        {
            if(!answer.empty())
            {
                cout << answer.top() << endl;
                answer.pop();
            }
            else
                cout << -1 << endl;
        }
        else if(order == "size")
            cout << answer.size() << endl;
        else if(order == "empty")
        {
            if(answer.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if(order == "top")
        {
            if(!answer.empty())
                cout << answer.top() << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}
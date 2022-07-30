#include <iostream>

using namespace std;

int main()
{
    int x;
    int locate = 1;

    cin >> x;

    int times = 1;
    while(locate < x)
    {
        locate += (times * 6);
        times++;
    }

    cout << times << '\n';

    return 0;
}
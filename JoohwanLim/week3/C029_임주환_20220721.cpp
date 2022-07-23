#include <iostream>

using namespace std;

int main()
{
    long FC;
    long VC;
    long X;
    int Q = 0;

    cin >> FC >> VC >> X;

    if(VC >= X)
        Q = -1;
    else
        Q = 1 + FC / (X - VC);

    cout << Q << '\n';

    return 0;
}
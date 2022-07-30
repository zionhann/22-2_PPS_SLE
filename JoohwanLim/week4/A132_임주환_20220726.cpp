#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        double distance;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if(x1 == x2 && y1 == y2 && r1 == r2)
        {
            cout << -1 << endl;
            continue;
        }
        if(x1 == x2 && y1 == y2 && r1 != r2)
        {
            cout << 0 << endl;
            continue;
        }

        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        if(r1 + r2 < distance)
            cout << 0 << endl;
        if(r1 + r2 == distance)
            cout << 1 << endl;
        if(r1 + r2 > distance && abs(r1 - r2) < distance)
            cout << 2 << endl;
        if(abs(r1 - r2) == distance)
            cout << 1 << endl;
        if(abs(r1 - r2) > distance)
            cout << 0 << endl;
    }
    return 0;
}
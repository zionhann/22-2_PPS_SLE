#include <iostream>

using namespace std;

int main()
{
    int T;
    int A = 0, B = 0, C = 0;

    cin >> T;

    while(T > 0)
    {
        if(T >= 300)
        {
            T -= 300;
            A++;
        }
        else if(T >= 60)
        {
            T -= 60;
            B++;
        }
        else
        {
            T -= 10;
            C++;
        }
    }
    if(T != 0)
        cout << -1 << endl;
    else
        cout << A << " " << B << " " << C << endl;

    return 0;
}
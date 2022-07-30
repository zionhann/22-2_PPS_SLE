#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int x;
    int a, b;

    cin >> x;

    for(int i = 0 ; i < x ; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}
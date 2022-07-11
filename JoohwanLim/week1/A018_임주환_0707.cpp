#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    int temp;
    int result = 0;

    cin >> count;

    vector <int> a;
    vector <int> b;

    for(int i = 0 ; i < count ; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for(int i = 0 ; i < count ; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    for(int i = 0 ; i < count ; i++)
    {
        result += (a[i] * b[i]);
    }

    cout << result << endl;

    return 0;
}
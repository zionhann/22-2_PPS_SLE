#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector <int> rope(n);
    vector <int> w(n);

    for(int i = 0 ; i < n ; i++)
        cin >> rope[i];

    sort(rope.begin(), rope.end());
    reverse(rope.begin(), rope.end());

    for(int i = 0 ; i < n ; i++)
        w.push_back((i + 1) * rope[i]);

    sort(w.begin(), w.end());
    cout << w.back() << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, len;

    cin >> n >> len;

    vector <int> fruits(n);

    for(int i = 0 ; i < n ; i++)
        cin >> fruits[i];

    sort(fruits.begin(), fruits.end());

    for(int i = 0 ; i < n ; i++)
    {
        if(len < fruits[i])
            break;
        else
            len++;
    }

    cout << len << endl;

    return 0;
}
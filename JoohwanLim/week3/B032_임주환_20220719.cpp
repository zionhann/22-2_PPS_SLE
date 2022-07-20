#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int day = 1;
    int n;
    int answer = 0;

    cin >> n;
    vector <int> tree(n);
    vector <int> grow(n, 0);

    for(int i = 0 ; i < n ; i++)
        cin >> tree[i];

    sort(tree.begin(), tree.end());
    reverse(tree.begin(), tree.end());

    for(int i = 0 ; i < n ; i++)
    {
        grow[i] = day + tree[i] + 1;
        
        if(grow[i] > answer)
            answer = grow[i];
        
        day++;
    }

    cout << answer << endl;
    
    return 0;
}
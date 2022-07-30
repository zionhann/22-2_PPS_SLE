#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector <int> input(n);
    for(int i = 0 ; i < n ; i++)
        cin >> input[i];

    sort(input.begin(), input.end());
    
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
            cout << input[i];
        else if(input[i - 1] != input[i])
            cout << input[i];
        else
            continue;
        
        cout << " ";
    }
    cout << '\n';

    return 0;
}
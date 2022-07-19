#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int make;
    int answer = 0;
    vector <int> x;


    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());

    cin >> make;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(x[i] + x[j] == make)
            {
                answer++;
                break;
            }
            if(x[i] + x[j] > make)
                break;
        }
    }

    cout << answer << endl;

    return 0;
}
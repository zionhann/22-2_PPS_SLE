#include <iostream>
#include <vector>

using namespace std;

int people(int k, int n);

int main()
{
    int test;
    cin >> test;

    vector <int> result;

    for(int i = 0 ; i < test ; i++)
    {
        int k, n;
        cin >> k;
        cin >> n;

        result.push_back(people(k, n));
    }

    for(int i = 0 ; i < test ; i++)
        cout << result[i] << endl;

    return 0;
}

int people(int k, int n)
{
    if(k == 0)
        return n;

    int sum = 0;
    
    if(k == 1)
    {
        for(int i = 1 ; i <= n ; i++)
            sum += i;

        return sum;
    }

    for(int i = 0 ; i <= n ; i++)
        sum += people(k - 1, i);

    return sum;
}
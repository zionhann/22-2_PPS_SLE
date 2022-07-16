#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int A, B;
    int N;
    int min = 0;
    
    vector <int> favorite;

    cin >> A >> B;
    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        int tmp;
        cin >> tmp;
        favorite.push_back(tmp);
        
        if(tmp == B)
            min = 1;
    }

    if(min != 0)
    {
        cout << min << endl;
        return 0;
    }

    min = abs(B - A);

    for(int i = 0 ; i < N ; i++)
    {
        if(min > abs(favorite[i] - B))
        {
            min = abs(favorite[i] - B);
            min++;
        }
    }

    cout << min << endl;

    return 0;
}
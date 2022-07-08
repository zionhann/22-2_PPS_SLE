#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int sum[5] = {0, };
    int max = 0;
    int index = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> score;
            sum[i] += score;
        }
    }
    
    max = sum[0];
    for(int i = 0 ; i < 5 ; i++)
    {
        if(sum[i] > max)
        {
            max = sum[i];
            index = i;
        }
    }

    cout << index + 1 << " " << sum[index] << endl;

    return 0;
}
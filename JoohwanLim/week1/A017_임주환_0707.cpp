#include <iostream>
using namespace std;

int main()
{
    string input;
    int num[10] = {0, };
    int max;

    cin >> input;

    for(int i = 0 ; i < input.length() ; i++)
    {
        num[input[i] - '0']++;
    }

    num[6] = (num[6] + num[9]);
    if(num[6] % 2 == 1)
        num[6] = num[6] / 2 + 1;
    else
        num[6] /= 2;

    num[9] = 0;

    max = num[0];
    for(int i = 0 ; i < 10 ; i++)
    {
        if(max < num[i])
            max = num[i];
    }
    
    cout << max << endl;

    return 0;
}
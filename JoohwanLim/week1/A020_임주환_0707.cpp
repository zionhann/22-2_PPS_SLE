#include <iostream>
using namespace std;

int main()
{
    int in;
    int out;

    int train = 0;
    int max = 0;

    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> out;
        cin >> in;

        train -= out;
        train += in;

        if(train > max)
            max = train;
    }

    cout << max << endl;

    return 0;
}
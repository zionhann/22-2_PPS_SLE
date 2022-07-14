#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int day, mood;

    double GG, GB, BG, BB;
    double predictG = 1;
    double predictB = 1;

    double preG = 1;
    double preB = 1;

    cin >> day >> mood;
    cin >> GG >> GB >> BG >> BB;

    if(mood == 0)
    {
        predictG = GG;
        predictB = GB;
    }
    else
    {
        predictG = BG;
        predictB = BB;
    }

    for(int i = 1 ; i < day ; i++)
    {
        preG = predictG;
        preB = predictB;

        predictG = preG * GG + preB * BG;
        predictB = preG * GB + preB * BB;
    }

    predictG *= 1000;
    predictB *= 1000;

    predictG = round(predictG);
    predictB = round(predictB);

    cout << predictG << endl;
    cout << predictB << endl;

    return 0;
}
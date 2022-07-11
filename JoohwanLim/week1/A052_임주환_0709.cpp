#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cin >> num;
    cin.get();

    for(int i = 0 ; i < num ; i++)
    {
        string OX;

        getline(cin, OX);

        int currentScore = 0;
        int total = 0;

        for(int j = 0 ; j < OX.length() ; j++)
        {
            if(OX[j] == 'O')
            {
                currentScore++;
                total += currentScore;
            }
            else
                currentScore = 0;
        }

        cout << total << endl;
    }

    return 0;
}
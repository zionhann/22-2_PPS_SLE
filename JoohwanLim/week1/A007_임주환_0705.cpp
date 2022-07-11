#include <iostream>
using namespace std;

int main()
{
    int input[8];
    int check = 0;

    string result;

    for(int i = 0 ; i < 8 ; i++)
        cin >> input[i];

    if(input[0] == 1)
    {
        for(int i = 0 ; i < 7 ; i++)
        {
            if(input[i] + 1 != input[i + 1])
            {
                cout << "mixed" << endl;
                return 0;
            }
        }
        cout << "ascending" << endl;
    }
    else if(input[0] == 8)
    {
        for(int i = 0 ; i < 7 ; i++)
        {
            if(input[i] - 1 != input[i + 1])
            {
                cout << "mixed" << endl;
                return 0;
            }
        }
        cout << "descending" << endl;
    }
    else
        cout << "mixed" << endl;

    return 0;
}

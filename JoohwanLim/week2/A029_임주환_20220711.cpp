#include <iostream>

using namespace std;

int main()
{
    int num;
    int open;

    cin >> num;
    cin >> open;

    if(num >= 6)
        cout << "Love is open door" << endl;
    else
    {
        if(open == 0)
        {
            for(int i = 2 ; i <= num ; i++)
            {
                if(i % 2 == 0)
                    cout << "1" << endl;
                else
                    cout << "0" << endl;
            }
        }
        else
        {
            for(int i = 2 ; i <= num ; i++)
            {
                if(i % 2 == 0)
                    cout << "0" << endl;
                else
                    cout << "1" << endl;
            }
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int money;
    int count = 0;
    cin >> money;

    while(money > 0)
    {
        if(money == 10)
        {
            money -= 10;
            count += 2;
            continue;
        }
        if(money == 15)
        {
            money -= 15;
            count += 3;
            continue;
        }
        if(money >= 7)
        {
            money -= 7;
            count++;
            continue;
        }
        if(money >= 5)
        {
            money -= 5;
            count++;
            continue;
        }
        if(money >= 2)
        {
            money -= 2;
            count++;
            continue;
        }
        money--;
        count++;
    }
    cout << count << endl;
    return 0;
}
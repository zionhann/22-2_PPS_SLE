#include <iostream>
using namespace std;

int main()
{
    int num;
    int tmp;
    int result = 0;

    cin >> num;

    for(int i = 0 ; i < num ; i++)
    {
        cin >> tmp;
        result += tmp;
    }
    result -= num - 1;

    cout << result << endl;
    
    return 0;
}
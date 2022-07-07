#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tmp;
    int sum = 0;
    int verify;

    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> tmp;
        sum += pow(tmp, 2);
    }

    verify = sum % 10;
    cout << verify << endl;
    
    return 0;
}
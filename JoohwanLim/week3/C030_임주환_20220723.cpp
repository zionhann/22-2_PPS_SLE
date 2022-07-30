#include <iostream>

using namespace std;

int combination(int n, int r);

int main()
{
    int fruit;
    int steal;
    int result;

    cin >> fruit;
    cin >> steal;

    steal -= fruit;

    result = combination(fruit + steal - 1, fruit - 1);

    cout << result << '\n';

    return 0;
}

int combination(int n, int r)
{
    if(n == r || r == 0) 
        return 1; 
    else 
        return combination(n - 1, r - 1) + combination(n - 1, r);
}
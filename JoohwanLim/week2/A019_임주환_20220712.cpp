#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int A, B, C;
    int multi;

    vector <int> answer(10, 0);

    cin >> A;
    cin >> B;
    cin >> C;

    multi = A * B * C;

    while(multi > 0)
    {
        int x;
        x = multi % 10;
        answer[x]++;
        multi /= 10;
    }

    for(int i = 0 ; i < 10 ; i++)
        cout << answer[i] << endl;

    return 0;
}
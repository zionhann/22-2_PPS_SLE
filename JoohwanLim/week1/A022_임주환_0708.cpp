#include <iostream>
using namespace std;

int main()
{
    int call;
    int tmp;
    int youngsik = 0;
    int minsik = 0;

    cin >> call;

    for(int i = 0 ; i < call ; i++)
    {
        cin >> tmp;

        youngsik += ((tmp / 30) + 1) * 10;
        minsik += ((tmp / 60) + 1) * 15;
    }

    if(youngsik < minsik)
        cout << "Y " << youngsik << endl;
    else if(youngsik > minsik)
        cout << "M " << minsik << endl;
    else
        cout << "Y M " << youngsik << endl;

    return 0;
}
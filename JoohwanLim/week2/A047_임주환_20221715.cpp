#include <iostream>

using namespace std;

int main()
{
    string str;
    string output;

    int len;

    cin >> str;

    len = str.length();

    for(int i = 0 ; i < len ; i += 10)
    {
        if(i + 10 > len)
            output = str.substr(i);
        else
            output = str.substr(i, 10);
        cout << output << endl;
    }

    return 0;
}
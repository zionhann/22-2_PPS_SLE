#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    vector <string> tail(str.length());

    for(int i = 0 ; i < tail.size() ; i++)
        tail[i] = str.substr(i, str.length() - i);

    sort(tail.begin(), tail.end());

    for(int i = 0 ; i < tail.size() ; i++)
        cout << tail[i] << '\n';

    return 0;
}